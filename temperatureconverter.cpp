#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    double temp;
    int inputScale, outputScale;

    cout << "Enter the temperature: ";
    cin >> temp;

    cout << "Select input scale (1: Celsius, 2: Fahrenheit, 3: Kelvin): ";
    cin >> inputScale;

    cout << "Select output scale (1: Celsius, 2: Fahrenheit, 3: Kelvin): ";
    cin >> outputScale;

    if (inputScale == outputScale) {
        cout << "Converted temperature: " << temp << endl;
    } else if (inputScale == 1 && outputScale == 2) {
        cout << "Converted temperature: " << celsiusToFahrenheit(temp) << endl;
    } else if (inputScale == 1 && outputScale == 3) {
        cout << "Converted temperature: " << celsiusToKelvin(temp) << endl;
    } else if (inputScale == 2 && outputScale == 1) {
        cout << "Converted temperature: " << fahrenheitToCelsius(temp) << endl;
    } else if (inputScale == 2 && outputScale == 3) {
        cout << "Converted temperature: " << fahrenheitToKelvin(temp) << endl;
    } else if (inputScale == 3 && outputScale == 1) {
        cout << "Converted temperature: " << kelvinToCelsius(temp) << endl;
    } else if (inputScale == 3 && outputScale == 2) {
        cout << "Converted temperature: " << kelvinToFahrenheit(temp) << endl;
    } else {
        cout << "Invalid input or output scale!" << endl;
    }

    return 0;
}
