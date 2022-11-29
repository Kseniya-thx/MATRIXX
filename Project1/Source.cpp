#include <iostream>
#include "Dll1.cpp"

using namespace std;

int main() {
	ComplexDll com(2, 5, 4, 7);

	cout << "z1 + z2 = ";
	com.Sum();
	cout << endl << "z1 - z2 = ";
	com.Vichitanie();
	cout << endl << "z1 * z2 = ";
	com.Umn();
	cout << endl << "z1 / z2 = ";
	com.Del();
	cout << endl;

	system("pause");
}