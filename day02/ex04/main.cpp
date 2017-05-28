//
// Created by Junius LEKGWARA on 2017/05/25.
//

#include <iostream>

void test(int a) {
    std::cout << a << std::endl;
}

std::string trim(std::string const &str) {
    if (str.empty())
        return str;

    std::size_t firstScan = str.find_first_not_of(' ');
    std::size_t first = firstScan == std::string::npos ? str.length() : firstScan;
    std::size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}

std::string replaceString(std::string &str, const std::string &rep, const std::string &with) {
    while (str.find(rep) != std::string::npos)
        str.replace(str.find(rep), rep.length(), with);
    return str;
}

std::string removeBrackets(std::string str) {
    if (str.find('(') != std::string::npos) {
        int start = str.find('(');
        int last = str.find(')');
        int op = str.find('+', str.find('('));
        int f = std::stoi(trim(str.substr(str.find('(') + 1, op - 1)));
        int l = std::stoi(trim(str.substr(op + 1)));
        std::string answer = std::to_string(f + l);
        std::string res = replaceString(str, str.substr(str.find('('), last + 1), answer);
        std::cout << "res: " << res << std::endl;
        removeBrackets(res);
    }
    return  str;
}

typedef void (*PGNSI)(int);

int main(int ac, char const *av[]) {
    std::string s = av[1];
    int start = s.find('(');
    int last = s.find(')');
    int op = s.find('+');
    int f = std::stoi(trim(s.substr(1, op - 1)));
    int l = std::stoi(trim(s.substr(op + 1)));
    std::cout << removeBrackets(s) << std::endl;
}