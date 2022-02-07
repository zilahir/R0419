#include <iostream>
#include <string>
using namespace std;

class Dog {
    int age;
    string name, race, voice;

    public:
        Dog(int dog_age, string dog_name, string dog_race, string dog_voice) {
            age = dog_age;
            name = dog_name;
            race = dog_race;
            voice = dog_voice;
        }
        void PrintInformation() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Race: " << race << endl;
        }

        string Bark() {
            return voice;
        }
};

int main()
{

  Dog buffy(2, "Buffy", "Bulldog", "Hau!!!");
  buffy.PrintInformation();
  cout << "Dog says: " << buffy.Bark();
} 