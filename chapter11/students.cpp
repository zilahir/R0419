#include <iostream>
#include <fstream>
#include <string> 
#include <vector> 
#include <sstream> 

using namespace std;

void strip_string(std::string const &str, const char delim, 
            std::vector<std::string> &out) { 

    std::stringstream ss(str);
    std::string s; 
    while (std::getline(ss, s, delim)) { 
        out.push_back(s); 
    } 
}

int main() {
    std::ifstream file("students.txt");
    std::vector< string > names;
    std::vector< string > classes;
    const char delim = ' '; 

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            // split the string by space
            string s = line.c_str();
            std::vector<std::string> out; 
            strip_string(s, delim, out); 
        
            cout << out[1] << " " << out[2] << ": " << "class " << out[0] << endl;
        }
        file.close();
    }
}