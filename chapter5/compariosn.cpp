#include <iostream>
using namespace std;

void handle_error() {
      cout << "An error occurred in the program!" << endl;
  }

void handle_coffee(int given_cubes) {
    if (given_cubes >= 0 && given_cubes <= 2) {
        cout << "Coffee certainly is invigorating!" << endl;
    } else if (given_cubes >= 3) {
        cout << "Well, coffee can taste pretty intense.." << endl;
    } else {
        handle_error();
    }
}

void handle_tea(int given_cubes) {
    if (given_cubes >= 0 && given_cubes <= 2) {
        cout << "Tea can have a soothing effect!" << endl;
    } else if (given_cubes >= 3) {
        cout << "Guess you enjoy your tea overly sweet?" << endl;
    } else {
        handle_error();
    }
}

int main() {
  string kort;
  int cubes;

  cout << "Do you drink coffee or tea? (k/t) ";
  cin >> kort;

  cout << "With how many cubes of sugar? ";
  cin >> cubes;
  
  if (kort == "t") {
      handle_tea(cubes);
  } else if (kort == "c") {
      handle_coffee(cubes);
  } else {
      handle_error();
  }
}