#include <iostream>
#include <string>
using namespace std;

double calcularImpuesto(double salario_total) {
    double impuesto;
    if (salario_total <= 2000) {
        impuesto = 0;
    } else if (salario_total <= 2200) {
        impuesto = salario_total * 0.20;
    } else {
        impuesto = salario_total * 0.30;
    }
    return impuesto;
}

int main() {
    string empleados[] = {"fatima", "ale", "accela", "vari", "karen"};
    int horas_trabajadas[] = {100, 200, 90, 190, 98};
    double tarifa_normal = 10;
    
    for (int i = 0; i < 5; i++) {
        double horas_normales = min(horas_trabajadas[i], 160);
        double horas_extra = max(horas_trabajadas[i] - 160, 0);
        double salario_normal = horas_normales * tarifa_normal;
        double salario_extra = horas_extra * (tarifa_normal * 1.5);
        double salario_total = salario_normal + salario_extra;
        double impuesto = calcularImpuesto(salario_total);
        double salario_neto = salario_total - impuesto;
        
        cout << "Empleado: " << empleados[i] << ", Salario neto: $" << salario_neto << endl;
    }
    
    return 0;
}
