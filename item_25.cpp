/***********************************************************************
#   > File Name   : item_25.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-25 16:31:44
***********************************************************************/

#include <vector>

using namespace std;

template<typename T>
class Widget {
 public:
  Widget(const Widget& w ) {}

  void swap(Widget& other) {
    using std::swap;
    swap(impl_, other.impl_);
  }
 private:
  WidgetImpl *impl_;
};

template<typename T>
class WidgetImpl {
 public:
  WidgetImpl(const T& a, const T& b, const T& c, const vector<T>& vec) 
      : a_(a), b_(b), c_(c), vec_(vec) {}
  
 private:
  T a_, b_, c_;
  vector<T> vec_;
};

int main(int argc, char **argv) {
 

  return 0;
}
