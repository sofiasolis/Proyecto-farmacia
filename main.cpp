//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072

#include <iostream>
#include <vector>
#include "Empleado.h"
#include "Medicamento.h"
#include "Inventario.h"

using namespace std;

int main()
{
    vector<Empleado> arregloEmpleados;
    vector<Medicamento> arregloMedicamentos;
    vector<TipoMedicamento> arregloTipoMedicamentos;
    vector<Proveedor> arregloProveedors;
    vector<Inventario> arregloInventarios;

    Empleado controladorEmpleado;
    Proveedor controladorProveedor;
    TipoMedicamento controladorTipoMedicamento;
    Medicamento controladorMedicamento;
    Inventario controladorInventario;

    int opcion = 0;
    string id; 
    while (opcion != 6) {
        system("cls");
        cout << "SISTEMA DE FARMACIA" << endl
            << "Opciones:" << endl
            << "1) Sistema de  Empleados" << endl
            << "2) Sistema de  Proveedores" << endl
            << "3) Tipo de Medicamentos" << endl
            << "4) Inventario Medicamentos" << endl
            << "5) Inventario General" << endl
            << "6) Salir" << endl
            << "Selecciona el numero del menu: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            system("cls");
            cout << "SISTEMA DE EMPLEADOS" << endl
                << "1) Agregar Empleado" << endl
                << "2) Buscar Empleado" << endl
                << "3) Lista de Empleados" << endl
                << "Elegir opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                controladorEmpleado = Empleado();
                controladorEmpleado.agregar(arregloEmpleados);
                break;
            case 2:
                controladorEmpleado.buscar(arregloEmpleados);
                break;
            case 3: 
                controladorEmpleado.listar(arregloEmpleados);
                break;
            default:
                cout << endl << "Mensaje: Opcion no valida" << endl << endl;
                break;
            }
            break;
        case 2:
            system("cls");
            cout <<  " PROVEEDORES" << endl
                << "1) Agregar Proveedor" << endl
                << "2) Lista de Proveedor" << endl
                << "Elegir opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                controladorProveedor = Proveedor();
                controladorProveedor.agregar(arregloProveedors);
                break;
            case 2:
                controladorProveedor.listar(arregloProveedors);
                break;
            default:
                cout << endl << "Mensaje: Opcion no valida" << endl << endl;
                break;
            }
            break;
        case 3:
            system("cls");
            cout << "TIPO DE MEDICAMENTOS" << endl
                << "1) Que tipo de Medicamento" << endl
                << "2) Lista de Medicamentos" << endl
                << "Elergir opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                controladorTipoMedicamento = TipoMedicamento();
                controladorTipoMedicamento.agregar(arregloTipoMedicamentos);
                break;
            case 2:
                controladorTipoMedicamento.listar(arregloTipoMedicamentos);
                break;
            default:
                cout << endl << "Mensaje: Opcion no valida" << endl << endl;
                break;
            }
            break;
        case 4:
            system("cls");
            cout << "INVENTARIO MEDICAMENTOS" << endl
                << "1) Agregar Medicamento" << endl
                << "2) Buscar Medicamento" << endl
                << "3) Lista de Medicamento" << endl
                << "Tu opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                controladorMedicamento = Medicamento();
                controladorMedicamento.agregar(arregloMedicamentos, arregloTipoMedicamentos, arregloProveedors);
                break;
            case 2:
                controladorMedicamento.buscar(arregloMedicamentos);
                break;
            case 3:
                controladorMedicamento.listar(arregloMedicamentos);
                break;
            default:
                cout << endl << "Mensaje: Opcion no valida" << endl << endl;
                break;
            }
            break;
        case 5:
            system("cls");
            cout << "INVENTARIO" << endl
                << "1) Agregar Inventario de Medicamento" << endl
                << "2) Buscar Inventario de Medicamento" << endl
                << "3) Listar Inventario" << endl
                << "Tu opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                controladorInventario = Inventario();
                controladorInventario.agregar(arregloInventarios, arregloMedicamentos);
                break;
            case 2:
                controladorInventario.buscar(arregloInventarios);
                break;
            case 3:
                controladorInventario.listar(arregloInventarios);
                break;
            default:
                cout << endl << "Mensaje: Opcion no valida" << endl << endl;
                break;
            }
            break;
        case 6:
            cout << endl << "Mensaje: Saliendo..." << endl << endl;
            break;
        default:
            cout << endl << "Mensaje: Opcion no valida" << endl << endl;
            break;
        }
        cout << endl << endl;
        system("pause");
    }
}