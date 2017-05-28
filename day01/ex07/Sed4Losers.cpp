//
// Created by Junius LEKGWARA on 2017/05/24.
//
#include "Sed4Losers.hpp"

bool Sed4Losers::isAllGood(std::string s1, std::string s2) {
    if (!s1.empty() && !s2.empty()) {
        return true;
    }
    return false;
}

std::string Sed4Losers::readFileToString(std::string filename) {
    std::ifstream in(filename);
    if (in) {
        std::stringstream buffer;
        buffer << in.rdbuf();
        return buffer.str();
    }
    std::cout << "unable to read file: " + filename << std::endl;
    return "";
}

std::string Sed4Losers::replaceString(std::string &str, const std::string &rep, const std::string &with) {
    while (str.find(rep) != std::string::npos)
        str.replace(str.find(rep), rep.length(), with);
    return str;
}

void Sed4Losers::writeToFile(std::string filename, std::string content) {
    std::ofstream out(filename);
    if (out) {
        out << content;
    } else {
        std::cout << "unable to write to file: " + filename;
    }
    out.close();
}

void Sed4Losers::dispose() {
    delete this;
}

