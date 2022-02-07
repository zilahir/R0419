#include <iostream>

using namespace std;

int largest(int n1, int n2, int n3) {
    if(n1 >= n2 && n1 >= n3)
        return n1;

    if(n2 >= n1 && n2 >= n3)
        return n2;
    
    if(n3 >= n1 && n3 >= n2)
        return n3;
    
    return 0;
};

int smallest(int n1, int n2, int n3) {
    if(n1 <= n2 && n1 <= n3)
        return n1;

    if(n2 <= n1 && n2 <= n3)
        return n2;
    
    if(n3 <= n1 && n3 <= n2)
        return n3;
    
    return 0;
};

int main()

{

  int number1, number2, number3, largestnumber,smallestnumber;

  cout << "Input the first integer";

  cin >> number1;

  cout << "Input the second integer:";

  cin >> number2;

  cout << "Input the third integer:";

  cin >> number3;

  largestnumber = largest(number1, number2, number3);

 smallestnumber =smallest(number1, number2, number3);

  cout << "The largest number was " << largestnumber;

  cout << " and the smallest " <<smallestnumber << "." << endl;


}