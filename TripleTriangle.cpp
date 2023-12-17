#include <iostream>
#include <math.h>

using namespace std;

double calculateArea(double a, double b, double c);
double calcPerimetr(double a, double b, double c);

int main()
{
	double a0, a1, a2, b0, b1, b2, c0, c1, c2;
	cout << "vvedite 9 znacheniy" << endl;
	cin >> a0 >> b0 >> c0 >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	if (a0 <= 0 || b0 <= 0 || c0 <= 0 || a1 <= 0 || b1 <= 0 || c1 <= 0 || a2 <= 0 || b2 <= 0 || c2 <= 0)
	{
		cout << "nedopustivoe znachenie dlin: vvedite znachenie > 0" << endl;
		return 0;
	}

	if (a0 < b0 - c0 || b0 < a0 - c0 || c0 < a0 - b0 || a1 < b1 - c1 || b1 < a1 - c1 || c1 < a1 - b1 || a2 < b2 - c2 || b2 < a2 - c2 || c2 < a2 - b2)
	{
		cout << "odin ili bolee triangles ne moget bit' postroen" << endl;
		return 0;
	}
	double area1 = calculateArea(a0, b0, c0);
	double area2 = calculateArea(a1, b1, c1);
	double area3 = calculateArea(a2, b2, c2);

	if (area1 > area2 && area1 > area3)
		cout << "max S:" << "1" << endl;
	if (area1<area2 && area2>area3)
		cout << "max S:" << "2" << endl;
	if (area3 > area2 && area1 < area3)
		cout << "max S:" << "3" << endl;

	double per0 = calcPerimetr(a0, b0, c0);
	double per1 = calcPerimetr(a1, b1, c1);
	double per2 = calcPerimetr(a2, b2, c2);
	double per3 = calcPerimetr(per0, per1, per2);
	cout << "obshiy perimetr:" << per3 << endl;

	return 0;
}
double calculateArea(double a, double b, double c)

{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
double calcPerimetr(double a, double b, double c)
{
	double s = (a + b + c);
	return s;
}