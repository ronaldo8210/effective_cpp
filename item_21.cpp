/***********************************************************************
#   > File Name   : item_21.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-22 08:46:52
***********************************************************************/

class Rational {
 public:
  Rational(int n, int d) : n_(n), d_(d) {}
  
  friend const Rational operator*(const Rational &lhs, const Rational &rhs);
 private:
  int n_, d_;
};

const Rational operator*(const Rational &lhs, const Rational &rhs) {
  return Rational(lhs.n_ * rhs.n_, lhs.d_ * rhs.d_);
}

int main(int argc, char **argv) {
  Rational a(1, 2);
  Rational b(3, 5);
  Rational c = a * b;

  return 0;
}
