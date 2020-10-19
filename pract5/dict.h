#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <iostream>

class WordCounterIO {
public:
    static std::vector<std::string> ReadFile(std::string fileName);
    static std::map<std::string, int> CountWords(std::vector<std::string>);
    static void PrintDictionary(std::map<std::string, int>);
};
