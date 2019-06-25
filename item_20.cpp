/***********************************************************************
#   > File Name   : item_20.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-25 08:17:07
***********************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Person {
 public:
  Person(const string &name, const string &address)
      : name_(name), address_(address) {
    cout << "Person constructor"  << endl;
  }
  ~Person() {
    cout << "Person destructor" << endl;
  }

 private:
  string name_;
  string address_;
};

class Student : public Person {
 public:
  Student(const string &name, const string &address, 
          const string &schoolName, const string &schoolAddress)
      : Person(name, address), schoolName_(schoolName), schoolAddress_(schoolAddress) {
    cout << "Student constructor"  << endl;
  }
  ~Student() {
    cout << "Student destructor" << endl;
  }

 private:
  string schoolName_;
  string schoolAddress_;
};

// 产生6次拷贝和6次析构
bool validateStudent(Student s) {
  return true; 
}

class Window {
 public:
  Window(const string& name) : name_(name) {}

  inline string name() const {
    return name_;    
  }

  virtual void display() const {
    cout << "window display" << endl;
  }

 private:
  string name_;
};

class WindowWithScrollBars : public Window {
 public:
  WindowWithScrollBars(const string &name) : Window(name) {}
  virtual void display() const {
    cout << "windowWithScrollBars display" << endl;
  }
};

// 产生对象切割问题
void printNameAndDisplay(Window w) {
  cout << w.name() << endl;
  w.display();
}

// 没有对象切割问题
void printNameAndDisplayEx(const Window &w) {
  cout << w.name() << endl;
  w.display();
}

int main(int argc, char **argv) {
  Student s("name", "address", "schoolName", "schoolAddress");
  bool ok = validateStudent(s);

  WindowWithScrollBars wwsb("wwsb");
  printNameAndDisplay(wwsb);
  printNameAndDisplayEx(wwsb);

  return 0;
}
