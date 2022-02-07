#include <iostream>

using namespace std;

const double PI = 3.142;

float circle_radius( float given_radious ) {
   return PI * given_radious * given_radious;
}

int main()
{
    int radius;

    cout << "Input circle radius:";
    cin >> radius;
    cout << "Circle area with the given radius: " << circle_radius(radius) << endl;
}