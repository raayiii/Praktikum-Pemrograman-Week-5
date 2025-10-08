#include <iostream>
using namespace std;

int jumlah(const int arr[], int n) {
int s = 0;
for (int i = 0; i < n; i++) {
s = s + arr[i];
}
return s;
}

int minVal(const int a[], int n) {
    int minv = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < minv)
            minv = a[i];
    return minv;
}

int maxVal(const int a[], int n) {
    int maxv = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > maxv)
            maxv = a[i];
    return maxv;
}

double mean(const int a[], int n) {
    int total = jumlah(a, n);
    return (double)total / n;
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
    cout << "\nNilai minimum: " << minVal(arr, n);
    cout << "\nNilai maksimum: " << maxVal(arr, n);
    cout << "\nRata-rata: " << mean(arr, n) << endl;
	
	return 0;
}
