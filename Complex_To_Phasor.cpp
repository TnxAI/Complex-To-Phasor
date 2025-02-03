#include <iostream>
#include <cmath>
using namespace std;

// Function to convert complex number (a + jb) to phasor (r∠θ)
void complexToPhasor(double a, double b) {
    double r = sqrt(a * a + b * b); // Calculate magnitude (r)
    double theta = atan2(b, a) * (180.0 / M_PI); // Calculate angle in degrees
    cout << "Phasor: " << r << "<" << theta << " degrees" << endl;
}

// Function to convert phasor (r∠θ) to complex number (a + jb)
void phasorToComplex(double r, double theta) {
    double a = r * cos(theta * M_PI / 180.0); // Calculate real part
    double b = r * sin(theta * M_PI / 180.0); // Calculate imaginary part
    cout << "Complex: " << a << " + j" << b << endl;
}

int main() {
    int choice;
    cout << "Choose conversion: \n";
    cout << "1. Complex (a + jb) to Phasor (r<Degrees)\n";
    cout << "2. Phasor (r<Degrees) to Complex (a + jb)\n";
    cout << "1 or 2: ";
    cin >> choice;
    
    if (choice == 1) {
        double a, b;
        cout << "Enter real part (a): ";
        cin >> a;
        cout << "Enter imaginary part (b): ";
        cin >> b;
        complexToPhasor(a, b);
    } else if (choice == 2) {
        double r, theta;
        cout << "Enter magnitude (r): ";
        cin >> r;
        cout << "Enter angle (theta in degrees): ";
        cin >> theta;
        phasorToComplex(r, theta);
    } else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
