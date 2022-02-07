#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    std::ifstream file("numbers.txt");
    std::vector< int > grades;
    int sum = 0;
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            // using printf() in all tests for consistency
            sum += stoi(line);
        }
        file.close();
    }
    cout << "Sum is " << sum << endl;
}