#include <iostream>
using namespace std;

class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}

class Printer {
    public:
        Calculator calculator;
        int result;
        void Print() {
            int a;
            int b;

            cout << "Give a first integer: ";
            cin >> a;
            cout << "Give a second integer: ";
            cin >> b;
            result = calculator.Sum(a, b);

            cout << "Sum: " << result << endl;
        }
};


// your code

int main()
{  
  Printer object;
  object.Print();
}