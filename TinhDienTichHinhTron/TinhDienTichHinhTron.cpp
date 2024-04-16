// TinhDienTichHinhTron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double Chuvi(double a) {
	return a * 2 * M_PI;
}
double DienTich(double a) {
	return a * a * M_PI;
}
int main()
{
	double a;
	double P, S;
		cout << "Nhap Ban Kinh Hinh Tron:" << " ";
	cin >> a;
		cout << "Chu Vi Hinh Tron La:" << Chuvi(a) << "cm" << endl;
		cout << "Dien Tich Hinh Tron La:" << DienTich(a) << "cm" << endl;
	
	return 0;
}


