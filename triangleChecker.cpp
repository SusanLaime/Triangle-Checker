#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
	float a, b, c;

	cout << "Insert side A of the triangle: ";
	cin >> a;
	cout << "Insert side B of the triangle: ";
	cin >> b;
	cout << "Insert side C of the triangle: ";
cin >> c;

if (a == b && b == c)
{
	cout << "TRIANGLE IS EQUILATERAL" << "\n";
}
else if ( a == b || b == c || a == c)
{
	cout << "TRIANGLE IS ISOSCELES" << "\n";
}
else {
	cout << "TRIANGLE IS SCALENE" << "\n";
}

return 0;
}
