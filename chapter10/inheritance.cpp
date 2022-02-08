#include <iostream>
#include <string>
using namespace std;

// Class Vehicle contains the methods

// InputWeight(), InputTopSpeed(), InputDrivenKM(), which are

// used to read the variable values of Vehicle class in the inheriting class.

// In addition Vehicle class contains the method Drive(length in km),

// that increments the kilometres driven by the vehicle.

 class Vehicle { // do not modify this

  public:
    int weight;
    int top_speed;
    long driven_km;
    Vehicle(int weight, int top_speed, long driven_km);
    void Drive(int journey);
    int InputWeight();
    int InputTopSpeed();
    long InputDrivenKM();
};

 // Class contains only one initializing method, where the characteristics of Vehicle are
// relayed as parameters right after creating the object.
 

Vehicle::Vehicle(int Aw, int Ats, long Akm) {
  weight = Aw;
  top_speed = Ats;
  driven_km = Akm;
}

 

void Vehicle::Drive(int journey) {
  driven_km += journey;
}

 

int Vehicle::InputWeight() {
  return weight;
}

 

int Vehicle::InputTopSpeed() {
  return top_speed;
}

 

long Vehicle::InputDrivenKM() {
  return driven_km;
}

 
// Car class and its method (your implementation)

// Class characteristics: (data type in parentheses)

// - brand (string)

// - model (string)

// - register_no (string)

// - running (bool)

// Class methods

// - turn_on(), changes the value of “running” to 1

// - turn_off(), changes the value of “running” to 0

// - check_up(), prints the car's information as shown by example output

// Other things worth noting

// - You can manipulate the variable values by using the methods in Vehicle class

// - If the car is running when it's checked, program prints: “Car is running”

// - Similarly if the car is not running, program prints: “Car is not running”

class Car : public Vehicle {
  int weight;
  int speed;
  long km;
  string brand;
  string model;
  string register_no;
  bool running;
    public:
        Car(int car_weight, int speed, long km, string car_brand, string car_model, string car_license, int car_is_running) : Vehicle(car_weight, speed, km) {
          brand = car_brand;
          model = car_model;
          register_no = car_license;
          running = car_is_running;
          weight = car_weight;
        }

        void check_up() {
            cout << "car info:" << endl;
            cout << "brand:" << brand << endl;
            cout << "model:" << model << endl;
            cout << "Kilometres:" << driven_km << endl;
            cout << "weight:" << weight << endl;
            cout << "Top speed:" << top_speed << endl;
            cout << "License plate:" << register_no << endl;
            if (running) {
              cout << "car is running." << endl;
            } else {
              cout << "car is not running." << endl;
            }
        }

        void turn_on() {
            running = true;
        }

        void turn_off() {
            running = false;
        }
};

 int main() {

  int weight, speed;

  long km;

  string brand, model, license;

 

  // ask information about car

  cout << "Input car brand: ";

  cin >> brand;

 

  cout << "Input car model: ";

  cin >> model;

 

  cout << "Input car license plate number: ";

  cin >> license;

 

  cout << "Input car weight: ";

  cin >> weight;

 

  cout << "Input car top speed: ";

  cin >> speed;

 

  cout << "Input distance traveled by car: ";

  cin >> km;

  cout << endl;

  Car carX(weight, speed, km, brand, model, license, 0);

 

  carX.check_up();

  carX.turn_on();

  carX.Drive(95);

  cout << endl;

  carX.check_up();

}