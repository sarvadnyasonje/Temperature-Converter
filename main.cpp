#include <iostream>
#include <iomanip>
using namespace std;

double cToF(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double cToK(double c) {
    return c + 273.15;
}

double fToC(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double fToK(double f) {
    return (f - 32) * 5.0 / 9.0 + 273.15;
}

double kToC(double k) {
    return k - 273.15;
}

double kToF(double k) {
    return (k - 273.15) * 9.0 / 5.0 + 32;
}

int main() {
    int choice;
    double temp;

    cout << fixed << setprecision(2);

    while (true) {

        cout << "\n========== TEMPERATURE CONVERTER ==========\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Celsius to Kelvin\n";
        cout << "3. Fahrenheit to Celsius\n";
        cout << "4. Fahrenheit to Kelvin\n";
        cout << "5. Kelvin to Celsius\n";
        cout << "6. Kelvin to Fahrenheit\n";
        cout << "7. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 7) {
            cout << "Thank you for using Temperature Converter!\n";
            break;
        }

        cout << "Enter temperature: ";
        cin >> temp;

        switch (choice) {
            case 1:
                cout << "Result = " << cToF(temp) << " F\n";
                break;

            case 2:
                cout << "Result = " << cToK(temp) << " K\n";
                break;

            case 3:
                cout << "Result = " << fToC(temp) << " C\n";
                break;

            case 4:
                cout << "Result = " << fToK(temp) << " K\n";
                break;

            case 5:
                cout << "Result = " << kToC(temp) << " C\n";
                break;

            case 6:
                cout << "Result = " << kToF(temp) << " F\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }
    }

    return 0;
}