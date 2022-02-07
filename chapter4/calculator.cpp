#include <iostream>
using namespace std;

int nums[2];
int sum;

string order[] = { "first", "second" };

void get_sum( int a, int b ) {
    cout << a << "+" << b << " = " << a + b << endl;
}

void get_diff( int a, int b ) {
    cout << a << "-" << b << " = " << a - b << endl;
}

void get_multiplication( int a, int b ) {
    cout << a << "*" << b << " = " << a * b << endl;
}

void get_remainder( int a, int b ) {
    cout << "Remainder: " << 0 * b + a << endl;
}

int main()
{
  for (int i = 0; i < 2; i++) {
    cout << "Input " << order[i] << " integer:";
    cin >> nums[i];
  }

  get_sum(nums[0], nums[1]);
  get_diff(nums[0], nums[1]);
  get_multiplication(nums[0], nums[1]);
  get_remainder(nums[0], nums[1]);

}