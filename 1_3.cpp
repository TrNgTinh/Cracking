#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<conio.h>

using namespace std;
int keygen(string s)
{
	int EDI=0,EAX,Serial;
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		EDI = EDI + s[i];
	}
	EAX = EDI ^ 22136;
	Serial = EAX ^ 4660;
	return Serial;
}
int main()
{
	string a;
	cout << "Nhap vao Name bao gom cac chu cai & Do dai < 11 " << endl;
	getline(cin, a);
	cout << "Serial la : ";
	cout << keygen(a);
	_getch();
	return 0;
}