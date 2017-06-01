//
// Created by julekgwa on 2017/05/31.
//

#include "Convert.hpp"

Convert::Convert(const char *number) : _i_number(atoi(number)), _fl_number(atof(number)), _str_number(number) {
    convert_float();
    convert_double();
    convert_char();
    convert_int();
}

Convert::Convert(Convert const &src) : _i_number(src._i_number), _fl_number(src._fl_number) {
}

Convert &Convert::operator=(Convert const &obj) {
    this->_i_number = obj._i_number;
    this->_fl_number = obj._fl_number;
    return *this;
}

Convert::~Convert() {
}

std::string Convert::getStrNumber() {
    return this->_str_number;
}

void Convert::convert_int() {
    if (this->_str_number == "nan" || this->_str_number == "NULL")
        this->int_result = "int: impossible";
    else
        this->int_result = "int: " + std::to_string(this->_i_number);
}

void Convert::convert_char() {
    if (this->_str_number == "0" || this->_str_number == "NULL" || this->_i_number < 33)
        this->_to_char = 0;
    else
        this->_to_char = static_cast<char>(this->_i_number);
}

void Convert::convert_double() {
    if (this->_str_number == "nan")
        this->double_result = "double: nan";
    else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << static_cast<double>(this->_fl_number);
        std::string s = stream.str();
        this->double_result = "double: " + s;
    }
}

void Convert::convert_float() {
    if (this->_str_number == "nan")
        this->float_result = "float: nanf";
    else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << static_cast<float>(this->_fl_number);
        std::string s = stream.str();
        this->float_result = "float: " + s + "f";
    }
}

void Convert::getCharResult() {
    std::cout << "test";
}

std::string Convert::getDoubleResult() {
    return this->double_result;
}

std::string Convert::getFloatResult() {
    return this->float_result;
}

std::string Convert::getIntResult() {
    return this->int_result;
}

char Convert::getChar() {
    return this->_to_char;
}

int Convert::getINumber() {
    return this->_i_number;
}

Convert::operator float() {
    return static_cast<float>(this->_fl_number);
}

Convert::operator char() {
    return static_cast<char>(this->_i_number);
}

Convert::operator int() {
    return static_cast<int>(this->_i_number);
}

Convert::operator double() {
    return static_cast<double>(this->_fl_number);
}

std::ostream &operator<<(std::ostream &output, Convert &convert) {
    std::string s;
    if (convert.getStrNumber() == "nan" || convert.getINumber() > 126)
        s = "char: impossible";
    else
        s = (convert.getChar()) ? "char: " : "char: Non displayable";
    output << s << convert.getChar() << "\n" << convert.getIntResult() << "\n" << convert.getFloatResult()
           << "\n" << convert.getDoubleResult() << std::endl;
    return output;
}