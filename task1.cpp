#include <iostream>
#include <random>
#include <stdio.h>

int main() {
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<int> dist(0, 99);
  int rand_number = dist(mt);
  int guessed_number;
  std::cout << "Guess a number between 0 and 99: ";
  std::cin >> guessed_number;
  bool correct_guess = 0;
  while (!correct_guess) {
    if (rand_number == guessed_number) {
      std::cout << "Congrats. You Have Won!\n";
      correct_guess = 1;
    } else if (rand_number < guessed_number && guessed_number < 100) {
      std::cout << "Your number is bigger than random number! Try again: ";
      std::cin >> guessed_number;
    } else if (rand_number > guessed_number && guessed_number > 0) {
      std::cout << "Your number is smaller than random number: Try again: ";
      std::cin >> guessed_number;
    } else if (guessed_number > 100 || guessed_number < 0) {
      std::cerr << "[WARNING] : Number must be between 0 and 99\n";
      std::cout << "Try again: ";
      std::cin >> guessed_number;
    } else {
      std::cout << "Error encountered, exiting...\n";
      std::cout << dist(mt) << "\n";
      return 1;
    }
  }
  return 0;
}