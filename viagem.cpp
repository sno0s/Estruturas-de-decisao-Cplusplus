#include <iostream>
#include <iomanip>
using namespace std;
//sal�rio (atividade)
int main()
{
	float tempo;
	float velocidade;
	float resultado;
	
	cin >> tempo >> velocidade;
	// 1 litro de combust�vel � igual a 12km de viagem, o problema quer saber
	// a quantidade de litros utilizada 
	resultado = tempo * velocidade / 12;
	
	cout << fixed << setprecision (3) << resultado << endl;
	return 0;
	//basicamente deu tudo certo tmj
	
}
