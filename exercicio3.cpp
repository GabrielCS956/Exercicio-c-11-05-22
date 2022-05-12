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
    double raio, perimetro, area;
    
    cout << "\n Entre com o valor do raio:";
    cin >> raio;
    
    perimetro = 2 * 3.14 * raio;
    area = 3.14 * (raio * raio);
    
    cout << "\n O perimetro é:" << perimetro;
    cout << "\n A area é:" << area << endl;

    return 0;
}
