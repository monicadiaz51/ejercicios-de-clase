#include <iostream>
using namespace std;
int main(){
float promedio= 0;
float nota [6];
for(int i = 0; i<6; i++){
    cout<<"introduzca la nota"<< i+1<<"\n";
    cin>>nota[i];
    promedio = promedio + nota[i];
}
cout<<promedio/6;
return 0;
} 

