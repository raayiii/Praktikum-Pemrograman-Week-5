#include <iostream>
using namespace std;

int main() {
	
	float a, b, c, d;
	cout << "Masukkan elemen matriks 2x2: ";
	cin >> a >> b;
	cin >> c >> d;
	
	float det = a*d - b*c;
	cout << "determinan matriks kamu: " << det;
	
	cout << "Invers matriks kamu: " << endl;
	cout << (d/det) << " " << (-b/det) << endl;
	cout << (-c/det) << " " << (a/det);

return 0;	
}
