#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "Input an integer:";
  cin >> number;

  if (number < 0) {
      cout << "Error! Factorial of a negative number doesn't exist.";
  }

  long double result = 1.0;
  for (int i = 1; i <= number; i = i + 1) {
      result *= i;
  }

  cout << "The factorial of number " << number << " is " << result << endl;
}