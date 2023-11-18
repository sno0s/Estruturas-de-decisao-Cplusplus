#include <iostream>
using namespace std;

int main()
{
	char nome1[15];
	int idade1;
	char nome2[15];
	int idade2;
	
	cin.getline(nome1,15);
	cin >> idade1;
	cin.ignore();
	cin.getline(nome2,15);
	cin>> idade2;
	//cin >> nome1 >> idade1 >> nome2 >> idade2;
	
	if (idade1>idade2){
		cout << nome1 << endl;
	}
	else if (idade1<idade2){
		cout << nome2 << endl;
	}
	else {
		cout << "Idades iguais" << endl;
	}
	
		
	return 0;
}