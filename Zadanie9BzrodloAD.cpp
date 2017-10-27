#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
#include <time.h>
#include <Windows.h>
#include <cstdlib>
using namespace std;

int p, q, a;
int main()


{
	do
	{


		srand((unsigned)time(NULL));
		p = rand() % 5+1;
		cout << p;
		Sleep(2000);
		system("cls");
		
		
		q = rand() % 5+1;
		cout << q;
	Sleep(2000);
		system("cls");


		if (p == 2 || p == 4 || p == 6)
		{
			if (q == 2 || q == 4 || q == 5)
			{
				cout << "twoja nagroda to " << p + (3 * q) << endl;
				Sleep(2000);
				system("cls");
			}
			else
			{
				cout << "twoja nagroda to " << 2 * q << endl;
				Sleep(2000);
				system("cls");
			}

		}
		else
		{
			if (q == 1 || q == 3 || q == 6)
			{
				cout << "twoja nagroda to ";

				if (p == q)
				{
					cout << 3 + (5 * p);
					Sleep(2000);
					system("cls");
				}
				else
				{

					cout << (2 * q) + p;
					Sleep(2000);
					system("cls");
				}

			}
			else
			{
				cout << "twoja nagroda to ";
				if (p >= q)
				{
					cout << q + 4;
					Sleep(2000);
					system("cls");
				}
				else
				{
					cout << p + 4;
					Sleep(2000);
					system("cls");
				}

			}
			if (p == 5 && q == 5)
			{
				cout << " otrzymujesz dodatkowe 5 punktow";
			Sleep(2000);
			system("cls");

			}

		
		}
		cout << " czy chcesz by program wykona³ sie jeszcze raz? tak(1) nie(2)";
		cin >> a;
	} while (a == 1);
	_getch();
	return(1);
}
