
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operacija;

    cout << "Vnesi prvo stevilo: ";
    cin >> a;

    cout << "Vnesi operacijo (+, -, *, /): ";
    cin >> operacija;

    cout << "Vnesi drugo stevilo: ";
    cin >> b;

    switch (operacija) {
        case '+':
            cout << "Rezultat: " << a + b;
            break;
        case '-':
            cout << "Rezultat: " << a - b;
            break;
        case '*':
            cout << "Rezultat: " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << "Rezultat: " << a / b;
            else
                cout << "Deljenje z 0 ni dovoljeno!";
            break;
        default:
            cout << "Napacna operacija!";
    }

    return 0;
}
