/***********************************************************************
#   > File Name   : item_6.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-23 20:33:18
***********************************************************************/

class Uncopyable {
 public:
  // 允许派生类构造和析构
  Uncopyable() {};
  ~Uncopyable() {};
 private:
  // 阻止拷贝
  Uncopyable(const Uncopyable&);
  Uncopyable& operator=(const Uncopyable&);
};

class HomeForSale : private Uncopyable {
 public:
  HomeForSale() : n_(1) {}
 private:
  int n_;
};

int main(int argc, char **argv) {
  HomeForSale h1;
  HomeForSale h2;
  //HomeForSale h3(h1);  // 编译失败
  //h2 = h1;  // 编译失败

  return 0;
}
