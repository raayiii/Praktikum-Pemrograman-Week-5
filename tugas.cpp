#include <iostream>
using namespace std;

int jumlah(const int arr[], int n) {
int s = 0;
for (int i = 0; i < n; i++) {
s = s + arr[i];
}
return s;
}


int main (){
	
	int n;
	int s;
	cout << "Masukkan jumlah elemen array: ";
	cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
	cout << "Masukkan nilai elemen ke-" << i + 1 << ": ";
	cin >> arr[i];
}
	s = jumlah(arr, n);
	cout << "Jumlah semua elemen: " << s;
	
	return 0;
}
