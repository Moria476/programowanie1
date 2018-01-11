#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

const int A = 0;
const int B = 1;
int x;

int main() {
	do {
		double epsilon;
		cout << "Podaj dokladnosc (Epsilon) z jaka chcesz obliczyc pierwiastek." << endl;
		do {
			cout << "Epsilon = "; cin >> epsilon;
			if (epsilon < 0 || epsilon > 1) {
				cout << "Wartosc Epsilon nie moze byc mniejsza od 0 lub wieksza od 1. Podaj ja ponownie." << endl;
			}
		} while (epsilon < 0 || epsilon > 1);

		double wartoscA = pow(M_E, -1.5*A) - 0.3 * pow(A, 2);
		double wartoscB = pow(M_E, -1.5*B) - 0.3 * pow(B, 2);
		double pierw;

		if (wartoscA == 0) {
			pierw = A;
			cout << "\nPierwiastek funkcji f(x) = e^(-1.5x)-0.3x^2 w przedziale <0,1> obliczony z dokladnoscia " << epsilon << " wynosi: " << pierw << endl;
			cout << "Liczba  iteracji: N/A" << endl;
		}
		else if (wartoscB == 0) {
			pierw = B;
			cout << "\nPierwiastek funkcji f(x) = e^(-1.5x)-0.3x^2 w przedziale <0,1> obliczony z dokladnoscia " << epsilon << " wynosi: " << pierw << endl;
			cout << "Liczba  iteracji: N/A" << endl;
		}
		else {
			double a = A;
			double b = B;
			double c;
			int i;
			for (i = 0; abs(a - b) >= epsilon; i++) {
				c = (a + b) / 2;
				double wartoscC = pow(M_E, -1.5*c) - 0.3 * pow(c, 2);
				double wartoscA = pow(M_E, -1.5*a) - 0.3 * pow(a, 2);
				if (wartoscC == 0) {
					pierw = c;
					break;
				}
				else if (wartoscA * wartoscC < 0) {
					b = c;
					continue;
				}
				else {
					a = c;
					continue;
				}
			}
			pierw = c;
			cout << "\nPierwiastek funkcji f(x) = e^(-1.5x)-0.3x^2 w przedziale <0,1> obliczony z dokladnoscia " << epsilon << " wynosi: " << pierw << endl;
			cout << "Liczba  iteracji: " << i << endl;
			cout << "nacisnij 1 by kontynuowac program" << endl;
			cin >> x;
		}

	} while (x == 1);
}