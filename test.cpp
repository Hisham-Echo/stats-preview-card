#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2, result, temperature;
    char op;
    int choice, num_courses;
    double total_credit_hours = 0;
    double total_quality_points = 0;
    double credit_hours, grade_point;
    double gpa;
    double gpa_4_scale;

    cout << "Welcome to the Calculator, Temperature Converter and GPA Calculator\n\n";

    cout << "Enter '1' for calculator, '2' for temperature converter or '3' for GPA calculator: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nCalculator" << endl;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the operator (+, -, *, /, 's'in, 'c'os, 't'an, %, s'q'rt, lo'g', p, l'o'g10, e): ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "Enter the second number: ";
            cin >> num2;
            result = num1 + num2;
            break;

        case '-':
            cout << "Enter the second number: ";
            cin >> num2;
            result = num1 - num2;
            break;

        case '*':
            cout << "Enter the second number: ";
            cin >> num2;
            result = num1 * num2;
            break;

        case '/':
            cout << "Enter the second number: ";
            cin >> num2;
            result = num1 / num2;
            break;

        case 's':
            result = sin(num1 * M_PI / 180.0);
            break;

        case 'c':
            result = cos(num1 * M_PI / 180.0);
            break;

        case 't':
            result = tan(num1 * M_PI / 180.0);
            break;

        case '%':
            cout << "Enter the percentage: ";
            cin >> num2;
            result = (num1 / 100) * num2;
            break;

        case 'q':
            result = sqrt(num1);
            break;

        case 'g':
            result = log(num1);
            break;

        case 'o':
            result = log10(num1);
            break;

        case 'p':
            cout << "Enter the exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            break;

        case 'e':
            result = exp(num1);
            break;

        default:
            cout << "Invalid operator";
            return 0;
        }

        cout << "The result is: " << result << endl;
        break;

    case 2:
        cout << "\nTemperature Converter" << endl;

        cout << "Enter the temperature: ";
        cin >> temperature;

        cout << "Choose the conversion type:" << endl;
        cout << "1. Kelvin to Celsius" << endl;
        cout << "2. Celsius to Kelvin" << endl;
        cout << "3. Celsius to Fahrenheit" << endl;
        cout << "4. Fahrenheit to Celsius" << endl;
        cout << "5. Kelvin to Fahrenheit" << endl;
        cout << "6. Fahrenheit to Kelvin" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            temperature -= 273.15;
            cout << "Temperature in Celsius: " << temperature << endl;
            break;
        case 2:
            temperature += 273.15;
            cout << "Temperature in Kelvin: " << temperature << endl;
            break;
        case 3:
            temperature = (temperature * 1.8) + 32.0;
            cout << "Temperature in Fahrenheit: " << temperature << endl;
            break;
        case 4:
            temperature = (temperature - 32.0) / 1.8;
            cout << "Temperature in Celsius: " << temperature << endl;
            break;
        case 5:
            temperature = (temperature - 273.15) * 1.8 + 32.0;
            cout << "Temperature in Fahrenheit: " << temperature << endl;
            break;
        case 6:
            temperature = (temperature - 32.0) / 1.8 + 273.15;
            cout << "Temperature in Kelvin: " << temperature << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        break;

    case 3:
        cout << "\nGPA Calculator" << endl;

        cout << "Enter the number of courses: ";
        cin >> num_courses;

        for (int i = 1; i <= num_courses; i++)
        {
            // long double credit_hours, grade_point;
            cout << "Enter the credit hours for course " << i << ": ";
            cin >> credit_hours;
            cout << "Enter the grade point for course " << i << ": ";
            cin >> grade_point;

            total_credit_hours += credit_hours;
            total_quality_points += credit_hours * grade_point;
        }

        gpa = total_quality_points / total_credit_hours;
        gpa_4_scale = gpa / 4.0 * 100;

        cout << "Your GPA is: " << gpa << endl;
        cout << "Your GPA on a 4.0 scale is: " << gpa_4_scale << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}