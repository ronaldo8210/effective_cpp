/***********************************************************************
#   > File Name   : item_3.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-22 15:27:20
***********************************************************************/

#include <iostream>
#include <vector>

using namespace std;

class TextBook {
 public:
  TextBook(const string &s) : text_(s) {}

  char& operator[](size_t position) {
    return text_[position];
  }

  // 常量性不同，可以重载
  const char& operator[](size_t position) const {
    return text_[position];
  }

 private:
  string text_;
};

void print(const TextBook &ctb) {
  cout << ctb[0] << endl;
  //ctb[0] = 'x';  // 编译失败
}

int main(int argc, char **argv) {
  char greeting[] = "Hello";  // 用字符串字面值给数组赋初值
  greeting[0] = 'A';  // greeting不是常量指针

  char *p = greeting;
  const char *p2 = greeting;
  //p2[0] = 'A';  // 不能通过p2修改数组内容，编译失败
  char *const p3 = greeting;
  //p3 = nullptr;  // 编译失败
  const char *const p4 = greeting;

  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);

  const vector<int>::iterator iter = vec.begin();
  *iter = 10;
  //++iter;  // 编译失败

  vector<int>::const_iterator citer = vec.begin();
  //*iter = 10;  // 编译失败
  ++citer;

  TextBook tb("Hello");
  print(tb);

  tb[0] = 'x';
  print(tb);

  return 0;
}
