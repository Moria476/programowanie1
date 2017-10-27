#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
#include <time.h>
#include <Windows.h>
#include <cstdlib>
using namespace std;

int godziny, stawka1, stawka2,wynagrodzenie, wynagrodzenie2,stawka,x,a,b,c,d,A,B,C,D;
int main()


{
	do
	{
		cout << "podaj ilosc godzin przepracowana w ciagu tygodnia(max 168)" << endl;
		cin >> godziny;
		cout << "podaj kategorie zarobkow A(15), B(25) C(30) D(35)" << endl;
		cin >> stawka;
		stawka2 = 0;
		if (stawka == a||stawka==A);
		{
			stawka = 15;
		}
		if (stawka == b || stawka == B)
		{
			stawka = 25;
		}
			if (stawka == c || stawka == C)
			{
				stawka = 30;
			}
				if (stawka == d || stawka == D)
				{
					stawka = 35;
				}
		if (godziny > 40)
		{
			stawka2 = stawka * godziny - stawka * 40;
		}
		stawka1 = stawka*godziny;
		wynagrodzenie = stawka2 + stawka1;
		cout << " wynagrodzenie brutto= "<< wynagrodzenie<<endl;
		if (wynagrodzenie>=700)
		{
			wynagrodzenie2= wynagrodzenie-wynagrodzenie*0.15;
		}
		if (wynagrodzenie <=701&& wynagrodzenie >=1200)
		{
			wynagrodzenie2= wynagrodzenie - wynagrodzenie*0.20;
		}
		if (wynagrodzenie < 1200)
		{
			wynagrodzenie2= wynagrodzenie - wynagrodzenie*0.25;
		}
		cout << " wynagrodzenie netto= " << wynagrodzenie2 << endl;
		
		cout << " czy chcesz by program wykona³ sie jeszcze raz? tak(1) nie(2)";
		cin >> x;
	} 
	while (x == 1);
	_getch();
	return(1);
}
