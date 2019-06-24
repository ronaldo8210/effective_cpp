/***********************************************************************
#   > File Name   : item_16.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-24 16:14:59
***********************************************************************/

#include <string>

int main(int argc, char **argv) {
  std::string* stringPtr1 = new std::string;
  std::string* stringPtr2 = new std::string[10];

  delete stringPtr1;
  delete [] stringPtr2;

  return 0;
}
