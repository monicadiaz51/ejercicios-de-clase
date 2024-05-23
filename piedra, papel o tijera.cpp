#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    /*piedra = 1
      papel = 2
      tijera = 3*/

    int num;
    int i = 1;
    int maquina;

    while(i<=3)
    {
        cout<<"1.piedra, 2.papel o 3.tijera\n";
        cout<<"ingrese el numero";
        cin>>num;

        maquina = 1+rand()%3;
        if(num == maquina)
        {
            cout<<"es empate\n";
        }else if(num == 2 && maquina ==1|| num ==3 && maquina ==2)
        {
            cout<<"gana el usuario\n";
        }else (num ==1 && maquina ==2|| num ==2 && maquina ==3);
        {
            cout<<"gana maquina\n";
        }
        i++;
    }
    return 0;

    
   
}