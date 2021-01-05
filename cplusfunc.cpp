#include <iostream>
using namespace std;

//function needs to be declared at the top of the file
void myFunc();

int main() {
  myFunc();

  return 0;
}

//func definition
void myFunc(){
  std::cout << "This is a function in C++\n";
}