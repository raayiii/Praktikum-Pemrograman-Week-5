#include <iostream>
using namespace std;

int main() {
	
	float a, b, c, d, e, f, g, h, i;
	cout << "Masukkan elemen matriks 3x3: ";
	cin >> a >> b >> c;
	cin >> d >> e >> f;
	cin >> g >> h >> i;
	
	float det = a*e*i + b*f*g + c*d*h - c*e*g - a*f*h - b*d*g;
	cout << "determinan matriks kamu: " << det;
	
	
	
return 0;
	

}
