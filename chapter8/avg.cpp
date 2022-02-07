#include <iostream>
#include <vector>
using namespace std;

int main()
{
  #include <vector>
  std::vector< double > hours;
  double hour;
  int num_of_days;

    cout << "The program calculates the total amount of" << endl << "work hours during a given time frame and the average work day length." << endl;
    cout << "How many days:" << endl;

    cin >> num_of_days;

  for (int i = 0; i < num_of_days; i = i + 1) {
    cout << "Input hours of workday " << i + 1 << ": ";
      cin >> hour;
      if (hour > 0) {
          hours.push_back(hour);
      }
  }

  double sum = 0;

  for (int i = 0; i < hours.size(); i++) {
      sum += hours[i];
  }

  cout << "Total work hours: " << sum << endl;

  double avg;
  
  avg = sum / hours.size();

  cout << "Average work day length: " << avg << endl;

  cout << "Inputted hours: ";

  for (int i = 0; i < hours.size(); i++) {
    cout << hours[i] << " " ;
  }

  cout << endl;
}