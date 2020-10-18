#include "dict.h"
#include <iostream>
#include <map>
#include <string>

std::vector<std::string> WordCounterIO::ReadFile(std::string fileName) {
    std::ifstream input_file(fileName);
    std::string word;
    std::vector<std::string> words;
    if (input_file.is_open())
        while ((input_file >> word)) {
            words.push_back(word);
        }
    return words;
}

std::map<std::string, int> WordCounterIO::CountWords(std::vector<std::string> words) {
    std::map<std::string, int> countedWords;
    for (std::string word : words) {
        ++countedWords[word];
    }
    return countedWords;
}

void WordCounterIO::PrintDictionary(std::map<std::string, int> table) {
    std::map<std::string, int>::iterator it;
    for (auto [key, val] : table){
      std::cout << key << ": " << val << std::endl; 
    }
}
