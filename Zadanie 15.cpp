#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
double liczWartoscFunkcji(double x, int numerFunkcji);
void podajEpsilon(double &epsilon);
void piszWynik(int numerFunkcji, int liczbaIteracji, double pierwiastek, double dokladnosc);
void liczMetodaBisekcji(double dokladnosc, int numerFunkcji, double przedzialOd, double przedzialDo);

const double A1 = -2;
const double B1 = 0;
const double A2 = 1.5;
const double B2 = 2.2;
const double A3 = 0;
const double B3 = 1;

int main() {
	while (1) {
		cout << "Wybierz jedna z ponizszych opcji" << endl;
		cout << "(1) Pierwiastek funkcji f1(x) = sin(x)cos(x)+5x+1; <-2,0>" << endl;
		cout << "(2) Pierwiastek funkcji f2(x) = (pi-x*x+sin(x))/sqrt(25-x); <1.5,2.2>" << endl;
		cout << "(3) Pierwiastek funkcji f3(x) = exp(-1.5x)-0.3x*x; <0,1>" << endl;
		cout << "(4) Koniec" << endl;
		int wybor;
		cin >> wybor;
		switch (wybor)
		
		{
		case 1:
		{
			double epsilon;
			podajEpsilon(epsilon);

			double pierw;
			if (liczWartoscFunkcji(A1, wybor) == 0) {
				pierw = A1;
				piszWynik(wybor, 0, pierw, epsilon);
			}
			else if (liczWartoscFunkcji(B1, wybor) == 0) {
				pierw = B1;
				piszWynik(wybor, 0, pierw, epsilon);
			}
			else {
				liczMetodaBisekcji(epsilon, wybor, A1, B1);
			}

			_getch();
			system("cls");
		}
		continue;

		case 2:
		{
			double epsilon;
			podajEpsilon(epsilon);

			double pierw;
			if (liczWartoscFunkcji(A2, wybor) == 0) {
				pierw = A2;
				piszWynik(wybor, 0, pierw, epsilon);
			}
			else if (liczWartoscFunkcji(B2, wybor) == 0) {
				pierw = B2;
				piszWynik(wybor, 0, pierw, epsilon);
			}
			else {
				liczMetodaBisekcji(epsilon, wybor, A2, B2);
			}

			_getch();
			system("cls");
		}
		continue;

		case 3:
		{
			double epsilon;
			podajEpsilon(epsilon);

			double pierw;
			if (liczWartoscFunkcji(A3, wybor) == 0) {
				pierw = A3;
				piszWynik(wybor, 0, pierw, epsilon);
			}
			else if (liczWartoscFunkcji(B3, wybor) == 0) {
				pierw = B3;
				piszWynik(wybor, 0, pierw, epsilon);
			}
			else {
				liczMetodaBisekcji(epsilon, wybor, A3, B3);
			}

			_getch();
			system("cls");
		}
		continue;

		case 4:
		{
			cout << "Nacisnij ENTER, aby potwierdzic zamkniecie programu...";
			_getch();
			return EXIT_SUCCESS;
		}

		default:
		{
			cout << "Nie ma takiej opcji. Prosze nacisnac ENTER, aby powrocic i wybrac ponownie.";
			_getch();
			system("cls");
			continue;
		}
		break;
		}
	}
}


double liczWartoscFunkcji(double x, int numerFunkcji) {
	double wartoscFunkcji;
	if (numerFunkcji == 1) {
		wartoscFunkcji = sin(x) * cos(x) + 5 * x + 1;
	}
	else if (numerFunkcji == 2) {
		wartoscFunkcji = (M_PI - pow(x, 2) + sin(x)) / sqrt(25 - x);
	}
	else {
		wartoscFunkcji = pow(M_E, -1.5 * x) - (0.3 * pow(x, 2));
	}
	return wartoscFunkcji;
}

void podajEpsilon(double &epsilon) {
	cout << "Podaj dokladnosc (Epsilon) " << endl;
	do {
		cout << "Epsilon = "; cin >> epsilon;
		if (epsilon < 0 || epsilon > 1) {
			cout << "Wartosc Epsilon nie moze byc mniejsza od 0 lub wieksza od 1." << endl;
		}
	} while (epsilon < 0 || epsilon > 1);
}

void piszWynik(int numerFunkcji, int liczbaIteracji, double pierwiastek, double dokladnosc) {
	if (numerFunkcji == 1) {
		cout << "\nPierwiastek funkcji f1(x) = sin(x)cos(x)+5x+1 w przedziale <" << A1 << "," << B1 << "> ";
	}
	else if (numerFunkcji == 2) {
		cout << "\nPierwiastek funkcji f2(x) = (pi-x*x+sin(x))/sqrt(25-x) w przedziale <" << A2 << "," << B2 << "> ";
	}
	else {
		cout << "\nPierwiastek funkcji f3(x) = exp(-1.5x)-0.3x*x w przedziale <" << A3 << "," << B3 << "> ";
	}
	cout << "obliczony z dokladnoscia " << dokladnosc << " wynosi: " << pierwiastek << endl;
	cout << "Liczba  iteracji: " << liczbaIteracji << endl;
}

void liczMetodaBisekcji(double dokladnosc, int numerFunkcji, double przedzialOd, double przedzialDo) {
	double a = przedzialOd;
	double b = przedzialDo;
	double c;
	double pierw;
	int i;
	for (i = 0; abs(a - b) >= dokladnosc; i++) {
		c = (a + b) / 2;
		if (liczWartoscFunkcji(c, numerFunkcji) == 0) {
			pierw = c;
			break;
		}
		else if ((liczWartoscFunkcji(a, numerFunkcji) * liczWartoscFunkcji(c, numerFunkcji)) < 0) {
			b = c;
			continue;
		}
		else {
			a = c;
			continue;
		}
	}
	pierw = c;
	piszWynik(numerFunkcji, i, pierw, dokladnosc);
}
