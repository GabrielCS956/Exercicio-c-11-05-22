/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   int numvendedor;
   double valorvenda;
   double percentual;
   double comissao;

    cout << "\n Informe o numero do vendedor";
    cin >> numvendedor;
    cout << "\n Informe o valor da venda";
    cin >> valorvenda;
    cout << "\n Informe o percentual da venda";
    cin >> percentual;
    
    comissao = valorvenda * percentual * 0.01;
    
    cout << "\n O vendedor" << numvendedor << "\nRecebeu a comissão de: " << comissao << endl;
    
    
    
system ("pause");
    return 0;
}
