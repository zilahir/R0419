#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "Input an integer:";
  cin >> number;
  for (int i = 1; i <= number; i = i + 1) {
      cout << i << endl;
  }
}