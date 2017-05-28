//
// Created by Junius LEKGWARA on 2017/05/24.
//

#ifndef DAY01_SED4LOSERS_HPP
#define DAY01_SED4LOSERS_HPP
#include <iostream>
#include <fstream>
#include <sstream>

class Sed4Losers {
public:
    bool isAllGood(std::string s1, std::string s2);
    std::string readFileToString(std::string filename);
    std::string replaceString(std::string &str, const std::string &repl, const std::string &with);
    void writeToFile(std::string filename, std::string content);
    void dispose();
};
#endif //DAY01_SED4LOSERS_HPP
