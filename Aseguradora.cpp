#include <iostream>
using namespace std;

int main()
{
    // Declaracion de variables
    float salario = 0, monto = 0, suma = 0, div = 0;
    int opcion = 0;

    // Datos a ingresar por el usuario
    cout << "Ingrese su salario ";
    cin >> salario;

    cout << "Escoga una opcion: Seguro de vida=1, Seguro por muerte=2, Seguro por invalidez=3, Gastos funerarios=4 ";
    cin >> opcion;

    // Obtener el monto segun salario
    if (salario >= 400 && salario <= 910)
    {
        monto = 10000;
    }

    else if (salario > 910 && salario < 1255)
    {
        monto = 14000;
    }

    else if (salario > 1255 && salario < 1630)
    {
        monto = 18000;
    }

    else if (salario > 1630)
    {
        monto = 22000;
    }

    else
    {
        cout << "Salario no valido";
    }

    switch (opcion)
    {
    case 1:
        // Monto segun primer caso
        cout << "El monto de su seguro de vida es: " << monto;
        break;

    case 2:
        // Segun caso 2, igual a caso 1
        cout << "EL monto de su seguro por muerte es: " << monto;
        break;

    case 3:
        // suma del 50% y division de 12 meses
        suma = monto * 0.50;
        div = suma / 12;
        cout << "El monto de sus gastos funerarios es: " << suma << " en un solo pago y " << div << " cada mes, durante 2 meses";
        break;

    case 4:
        // suma el monto y el 15% del monto minimo
        suma = monto + 1500;
        // si el monto supera 1750
        if (suma > 1750)
        {
            cout << "Su monto es: 1750";
        }

        else
        {
            // si el monto no supera los 1750
            cout << "Su monto es: " << suma;
        }
        break;

    default:
        // Si e escige un numero diferente a 1, 2, 3, 4
        cout << "Escoja una opcion valida";

        break;
    }
}