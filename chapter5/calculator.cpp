#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

std::map<std::string, int>::iterator serachByValue(std::map<std::string, int> & calculatorOperations, int val)
{
    std::map<std::string, int>::iterator it = calculatorOperations.begin();
    while(it != calculatorOperations.end())
    {
        if(it->second == val)
        return it;
        it++;
    }
}

bool isValidDecision(int dec, std::map<std::string, int> calculatorOperations) {
    std::map<std::string, int>::iterator it = serachByValue(calculatorOperations, dec);
        if(it != calculatorOperations.end()) {
            return true;
        } else {
            return false;
        }
}

void subtraction(int a, int b) {
    cout << a << "-" << b << " = " << a - b << endl;
}

void addition(int a, int b) {
    cout << a << "+" << b << " = " << a + b << endl;
}

void multiply(int a, int b) {
    cout << a << "*" << b << " = " << a * b << endl;
}

void division(int a, int b) {
    cout << a << "/" << b << " = " << a / b << endl;
}

void remainder (int a, int b ) {
    cout << a << "/" << b << " = " << a / b << endl;
}

int main()
{
    std::map<std::string, int> calculatorOperations;
    calculatorOperations.insert(std::make_pair("subtraction",1 ));
    calculatorOperations.insert(std::make_pair("addition",2 ));
    calculatorOperations.insert(std::make_pair("multiplication", 3));
    calculatorOperations.insert(std::make_pair("division",4 ));
    calculatorOperations.insert(std::make_pair("remainder",5 ));


    int decision;

    do {
        cout << "Choose desired calculation:" << endl;
        cout << "1: subtraction" << endl;
        cout << "2: addition" << endl;
        cout << "3: multiplication" << endl;
        cout << "4: division" << endl;
        cout << "5: Remainder" << endl;
        cout << "Choose a calculation:";
        cin >> decision;
        
    }
    while (!isValidDecision(decision, calculatorOperations));

    int nums[2];
    string order[] = { "first", "second" };

    for (int i = 0; i < 2; i++) {
        cout << "Input " << order[i] << " number:";
        cin >> nums[i];
    }

    switch(decision) {
    case 1:
        subtraction(nums[0], nums[1]);
        break;
    case 2:
        addition(nums[0], nums[1]);
        break;
    case 3:
        multiply(nums[0], nums[1]);
        break;
    case 4:
        division(nums[0], nums[1]);
        break;
    case 5:
        remainder(nums[0], nums[1]);
        break;
    default:
        return 0;
    }

}