#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>

double wartoscF(double x);
void bisekcja(double dokladnosc);


const int A = 0;
const int B = 1;
int x;
int main() 
{
	do  
	{
				double epsilon;
				cout << "Podaj dokladnosc (Epsilon) z jaka chcesz obliczyc pierwiastek." << endl;
				do {
					cout << "Epsilon = "; cin >> epsilon;
					if (epsilon < 0 || epsilon > 1)
					{
						cout << "Wartosc Epsilon nie moze byc mniejsza od 0 lub wieksza od 1" << endl;
					}
				} 
				while (epsilon < 0 || epsilon > 1);

				double wartoscA = pow(M_E, -1.5*A) - 0.3 * pow(A, 2);
				double wartoscB = pow(M_E, -1.5*B) - 0.3 * pow(B, 2);
				double pierw;
				if (wartoscF(A)==0) 
				{
					pierw = A;
					cout << "Pierwiastek funkcji f(x) = e^(-1.5x)-0.3x^2 w przedziale <0,1> obliczony z dokladnoscia " << epsilon << " wynosi: " << pierw << endl;

				}
				else if (wartoscF(B) == 0) 
				{
					pierw = B;
					cout << "Pierwiastek funkcji f(x) = e^(-1.5x)-0.3x^2 w przedziale <0,1> obliczony z dokladnoscia " << epsilon << " wynosi: " << pierw << endl;
				
				}
				else
				{
					bisekcja(epsilion);
				}
				
				cout << "Jesli chcesz kontynuowac program nacisnij(1)." << endl;
				cin >> x;

			} 
			while (x == 1);
			_getch();
			return(1);
			}

double wartoscF(double x)
{
	double wartoscFunkcji = pow(M_E, -1.5*x) - 0.3 * pow(x, 2);
	return wartoscFunkcji;
}

void bisekcja(double dokladnosc)
{
	double a = A;
	double b = B;
	double c;
	double pierw;
	int i;
	for (i = 0; abs(a - b) >= dokladnosc; i++) 
	{
		c = (a + b) / 2;
		if (liczWartoscFunkcji(c) == 0) {
			pierw = c;
			break;
		}
		else if ((liczWartoscFunkcji(a) * liczWartoscFunkcji(c)) < 0) {
			b = c;
			continue;
		}
		else {
			a = c;
			continue;
		}
	}
	pierw = c;
	cout << "\nPierwiastek funkcji f(x) = e^(-1.5x)-0.3x^2 w przedziale <0,1> obliczony z dokladnoscia " << dokladnosc << " wynosi: " << pierw << endl;
	cout << "Liczba  iteracji: " << i << endl;
}
