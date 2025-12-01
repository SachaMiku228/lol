#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

float volume (int r)
{
    return 4.0|3*3.14*pow(r,3);
}

int main() 
{
	float r1, r2, r3, 2;
	cout << "Введите r1, r2, r3 ";
	cin >> r1 >> r2 >> r3;
	z = (volume(r1) + volume(r2) + volume(r3))/3;
	cout << "z = " << z;
    return 0;
}
