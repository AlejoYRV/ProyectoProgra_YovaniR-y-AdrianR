#include <iostream>
#include "ReproductorCD.h"
using namespace std;

int main() {
    cout << "Proyecto 1 programacion avanzada\n" << endl;
    cout << "--------------------Bienvenido, en esta aplicación podrá almacenar sus CDs para poder reproducirlos--------------------" << endl;
    ReproductorCD reproductor;

menu1:
    cout << "Menu principal" << endl;
    cout << "Escoja una de las opciones que se presentan a continuación" << endl;
    cout << "1. Cargar respaldos" << endl;
    cout << "2. Reproductor de canciones" << endl;
    cout << "3. Salir del programa" << endl;
    int opcion;
    cin >> opcion;
    ReproductorCD* reproductorcr = &reproductor;
    string carpeta;
    switch (opcion) {
    case 1:
    masdisc:
        system("cls"); // Limpiar la pantalla
        cout << "--------------------Aquí podrá seleccionar los CDs que desee para poder almacenarlos en el programa---------------------\n" << endl;
        // Solicitar al usuario la ruta de la carpeta de respaldos
        cout << "Ingrese la ruta de la carpeta de respaldos: ";
        cin >> carpeta;
        // Cargar los respaldos desde la carpeta
        reproductorcr->cargarRespaldosDesdeCarpeta(carpeta);
        // Imprimir los discos cargados
        reproductorcr->imprimirDiscos();
        cout << "Desea regresar al menú principal? s=Si, n= No" << endl;
        char elegir;
        cin >> elegir;
        if (elegir == 's') {
            system("cls");
            goto menu1;
        }
        else {
            system("cls");
            goto menu2;
        }
        break;

    case 2:
    menu2:
        system("cls");
        cout << "Que desea hacer con sus canciones?" << endl;
        cout << "1. Agregar canción" << endl;
        cout << "2. Ver cola de reproducción" << endl;
        cout << "3. Reproducir actual" << endl;
        cout << "4. Reproducir siguiente" << endl;
        cout << "5. Ordenar" << endl;
        cout << "6. Regresar al menú principal" << endl;
        int opcion2;
        cin >> opcion2;
        switch (opcion2) {
        case 1:
            cout << "Agregar canción\n" << endl;
            // Agregar lógica para agregar canción
            break;
        case 2:
            cout << "Ver cola de reproducción\n" << endl;
            // Agregar lógica para ver la cola de reproducción
            break;
        case 3:
            cout << "Reproducir actual\n" << endl;
            // Agregar lógica para reproducir la canción actual
            break;
        case 4:
            cout << "Reproducir siguiente\n" << endl;
            // Agregar lógica para reproducir la siguiente canción
            break;
        case 5:
            cout << "Ordenar\n" << endl;
            // Agregar lógica para ordenar las canciones
            break;
        case 6:
            cout << "Desea regresar al menú principal? s=Si, n= No" << endl;
            char elegir;
            cin >> elegir;
            if (elegir == 's') {
                system("cls");
                goto menu1;
            }
            else {
                goto menu2;
            }
            break;
        default:
            goto menu2;
            break;
        }
        break;
    case 3:
        exit(-1);
        break;
    default:
        system("cls");
        goto menu1;
        break;
    }
}
