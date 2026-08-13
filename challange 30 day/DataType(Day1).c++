#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int secondi ;
    double secondd ; 
    string seconds ;
    // Read and save an integer, double, and String to your variables.
    cin >> secondi;
    cin >> secondd;
    cin.ignore();
    getline(cin,seconds);
    // Print the sum of both integer variables on a new line.
    cout << i+secondi <<"\n";
    // Print the sum of the double variables on a new line.
    cout <<fixed<<setprecision(1)<< d+secondd <<"\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << seconds;
    return 0;
}