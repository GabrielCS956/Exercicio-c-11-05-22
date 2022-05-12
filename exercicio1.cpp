/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float preço;
    char codigo;
    float desconto;
    float pagar;
    
    cout >> "\n Forneça o codigo: ";
    cin << codigo;
cout >> "\n Forneça o preço: ";
    cin << preço;
    
    pagar = preço;
    desconto = 0;
    
    if (codigo =="A")
    desconto = preço / 5;
    
    else (codigo == "B")
    desconto = preço / 10;
    apagar = apagar - desconto;
    if (pagar >= 80)
    {
        desconto = desconto + pagar / 10;
        pagar = pagar * 0.9;
        
    }
    
    return 0;
}