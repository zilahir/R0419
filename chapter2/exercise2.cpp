#include <iostream>
using namespace std;

int nums[2];
int sum;

string order[] = { "first", "second" };

int main()
{
  for (int i = 0; i < 2; i++) {
    cout << "Type the " << order[i] << " number:";
    cin >> nums[i];
  }

 for (int i = 0; i < 2; i = i + 1) {
     sum = sum + nums[i];
 }

    cout << "Sum of the numbers is " << sum << endl;
}