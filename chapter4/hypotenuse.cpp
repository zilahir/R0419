#include <iostream>
#include <cmath>
using namespace std;

int nums[2];

string order[] = { "first", "second" };

double calc_hypotenuse_length(int a, int b) {
  return sqrt(a * a + b * b);
}

int main()
{
  for (int i = 0; i < 2; i++) {
    cout << "Input " << order[i] << " triangle leg:";
    cin >> nums[i];
  }

  cout << "Hypotenuse length: " << calc_hypotenuse_length(nums[0], nums[1]) << endl;

}