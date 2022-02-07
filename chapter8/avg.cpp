#include <iostream>
#include <vector>
using namespace std;

int main()
{
  #include <vector>
  std::vector< int > hours;
  int hour;
  int num_of_days;

    cout << "The program calculates the total amount of work hours during a given time frame and the average work day length." << endl;
    cout << "How many days:" << endl;

    cin >> num_of_days;

  do {
      cout << "Input hours of workday " << hours.size() + 1 << ": ";
      cin >> hour;
      if (hour > 0) {
          hours.push_back(hour);
      }

  } while(hours.size() != num_of_days);

  float sum = 0;

  for (int i = 0; i < hours.size(); i++) {
      sum += hours[i];
  }

  cout << "Total work hours: " << sum << endl;

  float avg;
  
  avg = sum / hours.size();

  cout << "Average work day length: " << avg << endl;

  cout << "Inputted hours: ";

  for (int i = 0; i < hours.size(); i++) {
    cout << " " << hours[i];
  }
}