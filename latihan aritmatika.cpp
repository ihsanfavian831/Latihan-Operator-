#include <iostream>

using namespace std;
int main () {
	int a, b;
	
	//input dua bilangan bulat 
	cout << "Masukan bilangan pertama:";
	cin >> a;
	cout<< "Masukan bilangan kedua:";
	cin >> b;
	
	cout << "Hasil pembagian:" << a / b <<endl;
	cout << "Hasil modulus:" << a % b <<endl;
	cout << "Hasil perkalian:" << a * b <<endl;
	
	return 0;
}