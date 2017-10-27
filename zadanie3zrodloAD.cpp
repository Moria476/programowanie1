#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
#include<math.h>
using namespace std;


double alfa, R;

int main()
{
	cout << "podaj kat alfa ";
	cin >> alfa;
	cout << "podaj promieñ R ";
	cin >> R;
	

	double F = R*R / 2 * (M_PI*alfa / 180 - sin(alfa));
	cout << "pole wycinka kola wynosi: " << F<<"jednostka dlugosci^2";
	_getch();
	return(1);

	
}