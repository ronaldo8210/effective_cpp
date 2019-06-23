/***********************************************************************
#   > File Name   : item_5.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-23 18:34:38
***********************************************************************/

#include <iostream>

using namespace std;

template<typename T>
class NamedObject {
 public:
  NamedObject(const char *name, const T &object) : 
      nameValue_(name), objectValue_(object) {}

  NamedObject(const string &name, const T &object) : 
      nameValue_(name), objectValue_(object) {}

  // 编译器自动合成拷贝构造函数、移动构造函数、析构函数、拷贝赋值运算符、移动赋值运算符

  const string& nameValue() const {
    return nameValue_;
  }

 private:
  string nameValue_;
  T objectValue_;
};

template<typename T>
class NamedObjectEx {
 public:
  NamedObjectEx(string &name, const T &object) : 
      nameValue_(name), objectValue_(object) {}

  // 编译器不会合成拷贝赋值运算符，引用类型和const类型都是初始化后不可再被赋值的

 private:
  string &nameValue_;
  const T objectValue_;
};

int main(int argc, char **argv) {
  NamedObject<int> no1("Hello", 10);
  NamedObject<int> no2(no1);
  cout << no2.nameValue() << endl;

  string str1("Hello");
  string str2("World");
  NamedObjectEx<int> p(str1, 1);
  NamedObjectEx<int> s(str2, 2);
  //p = s;  // 编译失败

  return 0;
}
