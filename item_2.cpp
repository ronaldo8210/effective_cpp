/***********************************************************************
#   > File Name   : item_2.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-22 14:45:10
***********************************************************************/

#include <string>

#define ASPECT_RATIO 1.653  // bad
const double AspectRatio = 1.653;  // good

/*
 * NumTurns_ FudgeFactor_ 都是class专属常量，作用域限制在class内
 */

class GamePlayer {
 private:
  static const int NumTurns_ = 5;  // 带类内初始值的声明
  int scores_[NumTurns_];

  enum {
    kNumTurns = 5
  };
  int scores_other_[kNumTurns];
};

const int GamePlayer::NumTurns_;  // 定义，已被设置类内初始值，定义时不能再赋初值

class CostEstimate {
 private:
  static const double FudgeFactor_;
};

const double CostEstimate::FudgeFactor_ = 1.35;  // 没有类内初始值，在定义时赋初值

int main(int argc, char **argv) {
  //char *autherName = "Meyers";  // 编译失败，字符串字面值不可改，autherName必须为常量指针
  const char *const autherName = "Meyers"; 
  //autherName = nullptr;  // 编译失败，autherName是指针常量，不可被改

  const std::string autherNameStr("Meyers");

  return 0;
}
