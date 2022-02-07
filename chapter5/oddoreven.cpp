#include <iostream>
using namespace std;

void is_odd_or_even(int n) {
    if ( n % 2 == 0) {
        cout << "The number " << n << " is even." << endl;
    }
  else {
    cout << "The number " << n << " is odd." << endl;
  }
}

int main()
{
  int number;

  cout << "Input an integer: ";
  cin >> number;
  
  is_odd_or_even(number);
}