/***********************************************************************
#   > File Name   : item_9.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-24 10:40:37
***********************************************************************/

#include <string>

using namespace std;

class Transaction {
 public:
  Transaction(const string &logInfo) {
    logTransaction(logInfo);
  }

 private:
  void logTransaction(const string &logInfo) {
    
  }
};

class BuyTransaction : public Transaction {
 public:
  BuyTransaction() : Transaction(createLogString()) {}
 private:
  static string createLogString();
};

string BuyTransaction::createLogString() {
  return "log";
}

int main(int argc, char **argv) {
  BuyTransaction b;

  return 0;  
}
