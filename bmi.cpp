#include <iostream>
using namespace std;

void getUserInput(float& weight, float& height) {
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;
}

float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

void displayBMI(float bmi) {
    cout << "Your BMI is " << bmi << endl;
}

void displayBMIClassification(float bmi) {
    if (bmi < 18.5) {
        cout << "You are underweight." << endl; 
    } else if (bmi < 25) {
        cout << "You are normal." << endl;
    } else if (bmi < 30) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }
}

int main() {
    float weight, height, bmi;
    
    // Get user input
    getUserInput(weight, height);

    // Calculate BMI
    bmi = calculateBMI(weight, height);

    // Display BMI and classification
    displayBMI(bmi);
    displayBMIClassification(bmi);

    return 0;
}
