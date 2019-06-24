/***********************************************************************
#   > File Name   : item_13.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-24 13:18:40
***********************************************************************/

#include <iostream>
#include <memory>

using namespace std;

class Investment {
 public:
  Investment(int n) : n_(n) {}
  ~Investment() {
    cout << "call destructor!!" << endl;  
  }

 private:
  int n_;
};

Investment* createInvestment() {
  return new Investment(5);
}

void f() {
  shared_ptr<Investment> pInv1(createInvestment());
  shared_ptr<Investment> pInv2(pInv1);
  pInv1 = pInv2;
}

int main(int argc, char **argv) {
  f();

  // error!! 造成内存泄漏
  //auto_ptr<string> aps(new string[10]);
  //shared_ptr<int> spi(new int[10]);
  
  return 0;  
}
