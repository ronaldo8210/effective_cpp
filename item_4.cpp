/***********************************************************************
#   > File Name   : item_4.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-23 11:01:36
***********************************************************************/

#include <list>
#include <string>

using namespace std;

class ABEntry {
 public:
  ABEntry(const string &name, const string address, const list<string> phones) : 
      theName_(name), 
      theAddress_(address), 
      thePhones_(phones), 
      numTimesConsulted_(0) {}

  ABEntry() : theName_(), theAddress_(), thePhones_(), numTimesConsulted_(0) {}

 private:
  string theName_;
  string theAddress_;
  list<string> thePhones_;
  int numTimesConsulted_;
};

int main(int argc, char **argv) {
  

  return 0;
}
