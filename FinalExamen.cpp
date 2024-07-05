#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Empleado{
    string cedula;
    string nombres;
    string apellidos;
    string cargo;
    float salarioBase;
};

    void imprimirEmpleados(const Empleado& emp){
        cout << "Cedula: " << emp.cedula << endl;
        cout << "Nombres: " << emp.nombres << endl;
        cout << "Apellidos: " << emp.apellidos << endl;
        cout << "Cargo: " << emp.cargo << endl;
        cout << "Salario Base: " << emp.salarioBase << endl;
        cout << endl;
    }

    void aumentarSalario(Empleado& emp, float porcentaje){
        emp.salarioBase *= (1 + porcentaje);
    }

    int main(){
        vector<Empleado> empleados;

        empleados.push_back({"1234567890", "Juan", "Perez", "Gerente", 15000});
        empleados.push_back({"0987654321", "Maria", "Gomez", "Analista", 9000});
        empleados.push_back({"5678901234", "Carlos", "Lopez", "Programador", 25000});

        cout << "Empleados registrados: " << endl;
        for(const auto& emp : empleados){
            imprimirEmpleados(emp);
        }

for(auto& emp : empleados){
    if(emp.salarioBase > 10000){
        aumentarSalario(emp, 0.05);
    }
}

for(auto& emp : empleados){
    if(emp.salarioBase < 10000){
        aumentarSalario(emp, 0.10);
    }
}

cout << "Empleados con salario mayor a 20000: " << endl;
for(const auto& emp : empleados){
    if(emp.salarioBase > 20000){
        imprimirEmpleados(emp);
    }

}
return 0;
    }
