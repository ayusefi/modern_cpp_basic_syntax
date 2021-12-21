#include <iostream>
#include <sstream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[]) {
  if (argc == 3) {
    stringstream filename1, filename2;
    filename1 << argv[1];
    filename2 << argv[2];
    int num1, num2;
    string str1, str2;
    filename1 >> num1 >> str1;
    filename2 >> num2 >> str2;
    if (str1 == ".txt" && str2 == ".txt") {
      std::cout << "The mean of numbers is " << (num1 + num2) / 2 << "\n";
    } else if (str1 == ".png" && str2 == ".png") {
      std::cout << "The sum of numbers is " << num1 + num2 << "\n";
    } else if (str1 == ".txt" && str2 == ".png") {
      std::cout << "The modulo devision of numbers is " << num1 % num2 << "\n";
    } else {
      cerr << "Wrong inputs. The program is aborted\n";
    }
  } else {
    std::cerr << "ERROR! ONLY 2 Arguments allowed!!!\n";
    return 1;
  }
  return 0;
}