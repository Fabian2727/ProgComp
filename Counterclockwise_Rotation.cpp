#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	double pi = acos(-1.0); // pi en sexagesimal
	double a,b,d;
	cin>>a>>b>>d;
	
	d = d * pi/180; // d en sexagesimal
	
	double x, y;
	x = a * cos(d) - b * sin(d);
	y = a * sin(d) + b * cos(d);
	
	cout << fixed << setprecision(12) << x << " " << fixed << setprecision(12) << y << endl;
	
}
