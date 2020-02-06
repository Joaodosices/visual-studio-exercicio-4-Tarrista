#include <iostream>
#include <string>
using namespace std;

int main()
{
	int valor1{};
	int valor2{};
	
	cout << "Digite o primeiro numero: ";
	cin >> valor1;
	cout << "Digite o segundo numero: ";
	cin >> valor2;

	cout << "Quer multiplicar ou somar? (M ou S): ";
	string ola;
	cin >> ola;
	if (ola == "M")
	{
		cout << valor1 * valor2;
	}
	else if (ola == "S")
	{
		cout << valor1 + valor2;
	}
}
