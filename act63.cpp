#include <iostream>
using namespace std;

int main() {
	
	float a, b, c, d, e, f, g, h, i;
	cout << "Masukkan elemen matriks 3x3: ";
	cin >> a >> b >> c;
	cin >> d >> e >> f;
	cin >> g >> h >> i;
	
	float det = a*(e*i - f*h) - b*(d*i - f*g) + c*(d*h - e*g);
	
	float adj[3][3] = {
    { (e*i - f*h), -(b*i - c*h),  (b*f - c*e) },
    { -(d*i - f*g), (a*i - c*g), -(a*f - c*d) },
    { (d*h - e*g), -(a*h - b*g),  (a*e - b*d) }
    };

    float invers[3][3];
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
        invers[r][c] = adj[r][c] / det;
        }
    }
	
    cout << "Determinan: " << det << endl;
    cout << "Matriks invers:" << endl;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << invers[r][c] << " ";
        }
        cout << endl;
    }

return 0;
	

}