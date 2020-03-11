#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::istringstream string_buff;
  std::map<int, int> map;
  std::string word;
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " Name of the file " << std::endl;
    return 1;
  }
  std::string fileName = argv[1];
  std::ifstream myFile(fileName);
  if (myFile) {
    myFile.seekg(0, myFile.end);
    int length = myFile.tellg();
    myFile.seekg(0, myFile.beg);
    char *buffer = new char[length];
    myFile.read(buffer, length);
    string_buff.str(buffer);
    delete[] buffer;
    myFile.close();
  }
  while (string_buff >> word) {
    map[word.length()]++;
  }
  for (auto x : map)
    std::cout << "Number of charecters in word: " << x.first
              << "||Number of such words: " << x.second << std::endl;
  return 0;
}