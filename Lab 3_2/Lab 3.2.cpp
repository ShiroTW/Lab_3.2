#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    double a, b, c, x, y;
    cout << "����i�� a" << endl;
    cin >> a;
    cout << "����i�� b" << endl;
    cin >> b;
    cout << "����i�� c" << endl;
    cin >> c;
    cout << "����i�� x" << endl;
    cin >> x;

    double F1 = 0;
    if (x + 5 < 0 && c == 0) {
        F1 = (1 / (a * x)) - b;
    }
    if (x + 5 > 0 && c != 0) {
        F1 = (x - a) / x;
    }
    if (!(x + 5 < 0 && c == 0) && !(x + 5 > 0 && c != 0)) {
        F1 = (10 * x) / (c - 4);
    }

    double F2 = 0;
    if (x + 5 < 0 && c == 0) {
        F2 = (1 / (a * x)) - b;
    }
    else if (x + 5 > 0 && c != 0) {
        F2 = (x - a) / x;
    }
    else {
        F2 = (10 * x) / (c - 4);
    }
    cout << "���������� ���������: " << F1 << endl;
    cout << "������ ���������: " << F2 << endl;

    return 0;
}
