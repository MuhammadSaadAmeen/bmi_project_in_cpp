#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    // Get user input
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    cout << "Your BMI is " << bmi << endl;

    // Display BMI classification
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi < 25) {
        cout << "You are normal." << endl;
    } else if (bmi < 30) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}