#include<iostream>
#include <stdio.h>
using namespace std;
/*	Dat: pt bac nhat
	Huy: khoang cach
	Phat: pt bac hai
	Tien: tong 1 den n
	Trung: Tong giai thua
	Khoa: Tong a+b;
*/
int main()
{
	int cn;
	do
	{
		cout << "----------CHUONG TRINH CHUC NANG----------" << endl;
		cout << "1. " << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
		cout << "4. Tinh tong tu 1 den n" << endl;
		cout << "5. " << endl;
		cout << "6. " << endl;
		cout << "0. Thoat chuong trinh !!!" << endl;
		cout << endl;
		cout << "Chon chuc nang: ";
		cin >> cn;
		switch (cn)
		{
			case 1: //Dat: pt bac nhat
			break;
			
			case 2: //Huy: khoang cach
			break;
			
			case 3: //Phat: pt bac hai
			break;
			
			case 4:
			int n;
			printf ("Nhap n=");
			scanf ("%d", &n);
			int s=0;
			for (int i=0; i<=n; i++)
				s=s+i;
			printf ("S=%d", s);
			 //Tien: tong 1 den n
			break;
			
			case 5: //Trung: Tong giai thua
			break;
			
			case 6: //Khoa: Tong a+b;
			break;
			
			default:
				cout << "KHONG CO CHUC NANG! VUI LONG NHAP LAI !!!" << endl;
		}
	}
while (cn != 0);
}
#CodeHomework
#CodeHomework
#Codehomework
#CodeHomework
#CodeHomework
#CodeHomework
#codeHomework
#CodeHomework
#CodeHomework
#CodeHomework
# CodeHomework
#CodeHomework
#CodeHomework
