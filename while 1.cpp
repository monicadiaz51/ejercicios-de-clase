#include <iostream>
using namespace std;
int main()
{
    //imprimir una tabla de n numero

    int n = 1;
    int i = n;
    cout <<"ingrese un numero entero positivo \n";
    cin >> n;

    while (i<11)
    {
        cout << n << "x"<<i<<"="<<n*i<<"\n";
        i=i+1;
    }
    return 0;
}