#include <iostream>
#include <vector>
using namespace std;

int main()
{
  #include <vector>
  std::vector< int > grades;
  int grade;

    cout << "Program calculates the test grade average." << endl;
    cout << "Finish inputting with a negative number." << endl;

  do {
      cout << "Input grade (4-10) ";
      cin >> grade;
      if (grade > 0) {
          grades.push_back(grade);
      }

  } while(grade > 0);

  cout << "You inputted " << grades.size() <<  " grades." << endl;

  float sum = 0;

  for (int i = 0; i < grades.size(); i++) {
      sum += grades[i];
  }

  float avg;
  
  avg = sum / grades.size();

  cout << "Grade average: " << avg << endl;
}