/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{	
    setlocale(LC_ALL, "Portuguese-brasilian");
	
	double nota1, nota2, nota3;
	double soma, media;
	
	cout << "\n Digite a primeira nota"<< endl;
	cin >> nota1;
	cout << "\n Digite a segunda nota"<<endl;
	cin >> nota2;	
	cout << "\n Digite a terceira nota"<<endl;
	cin >> nota3;
	
	soma = nota1 + nota2 + nota3;
	media= soma/3;
	
	cout << "\n A soma das notas é:" << soma;
	cout << "\n A média das notas é:" << media;

    return 0;
}
