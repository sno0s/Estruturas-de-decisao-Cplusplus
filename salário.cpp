#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char nome[15];
	double salario;
	double vendas;
	double resultado;
	
	cin >> nome >> salario >> vendas;
	
	resultado = (vendas * 0.15) + salario;
	
	cout << fixed << setprecision(2) << "TOTAL = R$ " << resultado << endl;

	return 0;
}