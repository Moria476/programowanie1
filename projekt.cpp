#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

using namespace std;



void Dane(float &rozmiar, char &znak);
void Rysowanie(float rozmiar, float x, float y, char znak);
void Przesuwanie(float rozmiar, float &x, float &y, char znak);
void gotoxy(int x, int y);


int main()
{
	float x = 1, y = 1;
	float rozmiar;
	char znak;

	Dane(rozmiar, znak);
	Rysowanie(rozmiar, x, y, znak);
	_getch();
	Przesuwanie(rozmiar, x, y, znak);

	return 0;
}


void Dane(float &rozmiar, char &znak)
{
	int max = 20, min = 5;
	do
	{
	cout << "Podaj rozmiar znaku(5-20)" << endl;
	cin >> rozmiar;
	} while (rozmiar < min || rozmiar > max);

	cout << "Podaj znak ASCII ";
	cin >> znak;

}

void Rysowanie(float rozmiar, float x, float y, char znak)
{
	float i = x, j = y;

	system("cls");
	int xx = 0;
	int yy = rozmiar;
	int yyy = rozmiar;
	for (int z = i; z <= (i + rozmiar / 2); z++)
	{
		gotoxy(i + yy, j + xx), cout << znak;
		gotoxy(i + yyy, j + xx), cout << znak;


		yy++;
		xx++;
		yyy--;
	}
	yy = rozmiar;
	yyy = rozmiar;
	for (int z = i; z <= (i + rozmiar / 4); z++)
	{
		gotoxy(i + yy, j + rozmiar / 4), cout << znak;
		gotoxy(i + yyy, j + rozmiar / 4), cout << znak; //srodek
		yy++;
		yyy--;
	}
}

void Przesuwanie(float rozmiar, float &x, float &y, char znak)
{

	const int GORA = 72, DOL = 80, LEWO = 75, PRAWO = 77, przybliz=43, oddal=45;
	int zmiana = 0, max = 105, max2= 37, max3=23;
	char klawisz;

	do
	{
		klawisz = _getch();
		switch (klawisz)
		{
		case GORA:
		{
			y--; zmiana = 1;
			if (y < 1)
			{
				y++;
				zmiana = 0;
			}
			break;
		}

		case DOL:
		{
			y++;
			zmiana = 1;
			if (y > max2 - rozmiar)
			{
				y--;
				zmiana = 0;
			}
			break;
		}
		case LEWO:
		{
			x--; zmiana = 1;
			if (x < 1)
			{
				x++;
				zmiana = 0;
			}
			break;
		}
		case PRAWO:
		{
			x++; zmiana = 1;
			if (x > max - rozmiar)
			{
				x--;
				zmiana = 0;
			}
			break;
		}
		case przybliz:
		{
			rozmiar++; zmiana = 1;
			if (rozmiar< 5 || rozmiar > max3)
			{
				rozmiar--; y--;
				zmiana = 0;
			}
			break;
		}
		case oddal:
		{
			rozmiar--, zmiana = 1;
			if (rozmiar < 5 || rozmiar > max3)
			{
				rozmiar++;
				zmiana = 0;
			}
			break;
		}

		}
		if (zmiana==1)
		{
			Rysowanie(rozmiar, x, y, znak);
			zmiana = 0;
		}
	} while (klawisz !=27);
}

void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;

	cout.flush();
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}
