#include <iostream>

using namespace std;

double CHANGE_RATE = 0.727802;

double convert_to_usd( double usd_to_convert ) {
   return usd_to_convert * CHANGE_RATE;
}

int main()
{
    double usd;

    cout << "How much dollars do you want to exchange:";
    cin >> usd;
    cout << "Amount in euros: " << convert_to_usd(usd) << endl;
}