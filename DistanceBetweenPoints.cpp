#include <iostream>
#include <cmath>     // untuk sqrt() dan pow()
using namespace std;

// Function definition
double distancePoints(double x1, double y1, double x2, double y2) {
    double d;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
}

int main() {
    double x1, y1, x2, y2;

    cout << "Program Menghitung Jarak antara Dua Titik" << endl;
    cout << "Masukkan nilai x1: ";
    cin >> x1;
    cout << "Masukkan nilai y1: ";
    cin >> y1;
    cout << "Masukkan nilai x2: ";
    cin >> x2;
    cout << "Masukkan nilai y2: ";
    cin >> y2;

    double hasil = distancePoints(x1, y1, x2, y2);

    cout << "Jarak antara dua titik adalah: " << hasil << endl;

    return 0;
}
