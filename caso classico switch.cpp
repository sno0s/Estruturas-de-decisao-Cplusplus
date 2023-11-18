#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	
	int a;
	int b;
	char opcao;
	float resultado;
	
	cin >> a >> b >> opcao;
	
		
	switch (opcao){
		case '+':
			resultado = a + b;
			cout << resultado << endl;
			break;
		case '-':
			resultado = a - b;
			cout << resultado << endl;
			break;
		case '*':
			resultado = a * b;
			cout << resultado << endl;
			break;
		case '/':
			if (b<=0)
			cout << "Impossivel" << endl;
			else
			{
			resultado = (float)a / b;
			cout << resultado << endl;
			}
			break;
	
		
		
	}
	
	
}