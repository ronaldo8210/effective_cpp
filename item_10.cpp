/***********************************************************************
#   > File Name   : item_10.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-24 11:07:10
***********************************************************************/

#include <iostream>

using namespace std;

class Widget {
 public:
  Widget() {}
  Widget(int n) : n_(n) {}

  Widget& operator=(const Widget &rhs) {
    this->n_ = rhs.n_;
    return *this;
  }

  Widget& operator+=(const Widget &rhs) {
    this->n_ += rhs.n_;
    return *this;
  }

  inline int get() { return n_; }

 private:
  int n_ = 0;
};

int main(int argc, char **argv) {
  Widget x;
  Widget y;
  Widget z(5);

  x = y = z;
  cout << x.get() << endl;  // 5
  cout << y.get() << endl;  // 5

  Widget w1(10);
  Widget w2(20);
  Widget w3(30);

  w1 += w2 += w3;
  cout << w1.get() << endl;  // 60
  cout << w2.get() << endl;  // 50

  return 0;
}
