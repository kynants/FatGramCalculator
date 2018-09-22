#include <iostream>
using namespace std;

int main() {

    // Variables
    int cal,
        fat;

    // Prompt asks how many calories
    cout << "How many calories are in the food? ";
    cin >> cal;

    // Input Validation checks to see calories entered is less than 0.
    while (cal < 0) {
        cout << "Error. Calories cannot be less than 0.\n"
             << "Enter the correct number of calories: ";
        cin >> cal;
    }

    // Prompt asks how much fat
    cout << "How much fat is in the food? ";
    cin >> fat;

    // Input Validation checks to see fat amount entered is less than 0.
    while (fat < 0) {
        cout << "Error. Fat amount cannot be less than 0.\n"
             << "Enter the correct amount of fat: ";
        cin >> fat;
    }

    // Percentage of calories from fat
    double calFromFat = fat * 9;

    // Checks to see if total calories is less than calories from fat
    if (calFromFat < (cal * 0.3))
    {
        cout << "Food in the fat is low.";
    }

    // Program finally displays percentage of calories from fat.
    else
    {
        double percCalFromFat = calFromFat / cal;
        cout << "Percentage of calories from fat: "
             << percCalFromFat;
    }

    return 0;
}