#pragma once
#include<iostream>
using namespace std;
class wiladi
{
public:
	int a, b,c,d;
	void jami() {
		int t = a * d + b * c,k= d * b;
		cout << t<< endl;
		cout << "--" <<endl << k << endl;
	}
	void ganayofi() {
		int t = a * d;
		int k = c * b;
		cout << t << endl;
		cout << "--" << endl << k << endl;
	}
	void sxvaoba() {
		int t = a * d - b * c, k = d * b;
		cout << t << endl;
		cout << "--" << endl << k << endl;
	}
	void namravli() {
		int t =a*c, k = d * b;
		cout << t << endl;
		cout << "--" << endl << k << endl;
	}
};

