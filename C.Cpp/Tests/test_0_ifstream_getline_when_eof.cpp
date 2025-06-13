#include <fstream>
#include <iostream>
#include <string>

int main(){
  std::ifstream test("test_0.txt"); //The file should have 2 lines but actually it has only one
  std::string a;
  if(!test.good()){
    std::cout << "Bad open test_0.txt" << std::endl;
    return -1;
  }
  std::getline(test,a);
  std::cout << "EOF ST:" << test.eof() <<  "LINE 1:" << a << std::endl;
  std::getline(test,a);
  std::cout << "EOF ST:" << test.eof() <<  "LINE 2:" << a << std::endl;
  std::cout << "No except!" << std::endl;
  return 0;
}
