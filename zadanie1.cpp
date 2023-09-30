#include <iostream>

using namespace std;

int main()
{
	//ZADANIE 1.1//

	cout << "Patryk" << endl;
	cout << "30575" << endl;
	cout << "Polsko Japonska Akademia Technik Komputerowych" << endl;

	//ZADANIE 1.2//

	int liczba = 0; //zmienna przechowuj¹ca liczbê sprawdzan¹//
	cout << "Podaj liczbe calkowita: " << endl;
	cin >> liczba;
	if (liczba == 0)
		cout << "Liczba jest równa 0 " << endl;
	if (liczba < 0)
		cout << "Liczba mniejsza od 0" << endl;
	if (liczba > 0)
		cout << "Liczba wieksza od 0" << endl;

	//ZADANIE 1.3//

	if (liczba % 2 == 0)
		cout << "Liczba parzysta" << endl;
	if (liczba % 2 != 0)
		cout << "Liczba nieparzysta" << endl;
	if (liczba == 0)
		cout << "Liczba równa 0" << endl;

	//ZADANIE 1.4//
	//Sposob 1//
	int liczba1, liczba2, liczba3, a;

	cout << "Podaj 3 liczby:" << endl;
	cin >> liczba1 >> liczba2 >> liczba3;
	if (liczba1 > liczba2 && liczba1 > liczba3) {
		cout << liczba1 << " to najwieksza liczba sposrod podanych" << endl;
	}
	if (liczba2 > liczba1 && liczba2 > liczba3) {
		cout << liczba2 << "to najwieksza liczba sposrod podanych" << endl;
	}
	if (liczba3 > liczba1 && liczba3 > liczba2) {
		cout << liczba3 << "to najwieksza liczba sposrod podanych" << endl;
	}


	return 0;
}