#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

void f(float&x)
{
    x = ( x >= 0) ? x*2-x;
}

int main()
{
    float a;
    cout << "Введите a" << indl;
    cin >> a;
    f(a);
    cout << "a = " << a;
    return 0;
}