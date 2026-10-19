#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int opcion, cantidad;
    SetConsoleOutputCP(CP_UTF8);
    do
    {
        cout << "Bienvenido/a a 'Electronicos G2' que se le ofrece el dia de hoy?" << endl;
        cout << "1. Celulares" << endl;
        cout << "2. Computadoras" << endl;
        cout << "3. Televisores" << endl;
        cout << "4. Consolas de videojuegos" << endl;
        cout << "5. Bocinas" << endl;
        cout << "6. Audifonos" << endl;
        cout << "7. Cargadores" << endl;
        cout << "8. Accesorios" << endl;
        cout << "9. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Cuantos celulares desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " celulares." << endl;
            break;
        case 2:
            cout << "Cuantas computadoras desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " computadoras." << endl;
            break;
        case 3:
            cout << "Cuantos televisores desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " televisores." << endl;
            break;
        case 4:
            cout << "Cuantas consolas de videojuegos desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " consolas de videojuegos." << endl;
            break;
        case 5:
            cout << "Cuantas bocinas desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " bocinas." << endl;
            break;
        case 6:
            cout << "Cuantos audifonos desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " audifonos." << endl;
            break;
        case 7:
            cout << "Cuantos cargadores desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " cargadores." << endl;
            break;
        case 8:
            cout << "Cuantos accesorios desea comprar?" << endl;
            cin >> cantidad;
            cout << "Ha seleccionado " << cantidad << " accesorios." << endl;
            break;
        case 9:
            cout << "Gracias por visitarnos. ¡Hasta luego!" << endl;
            break;

        default:
            cout << "Opción no válida. Por favor, ingrese un número válido." << endl;
            break;
        }
    } while (opcion != 9);

    return 0;
}