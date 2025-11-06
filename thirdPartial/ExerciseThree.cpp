#include<iostream>

using namespace std;

/*Ejercicio 3: Total de multas por ciudad
Crea un programa que use tres arreglos paralelos:
1. Uno con las placas de los carros.
2. Otro con los valores de las multas.
3. Otro con las ciudades donde se registró cada multa.
El programa debe pedir al usuario una ciudad y mostrar:
1. Cada placa y su deuda correspondiente a esa ciudad.
2. El total de multas de la ciudad.
Listas a usar:
string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
Ejemplo de entrada:
Ciudad: Tunja
Ejemplo de salida:
Multas registradas en Tunja:
ABC123 - $250000
LMN456 - $300000
TYU999 - $120000
Total de multas en Tunja: $670000*/

void printerByCity(string plates[], float fines[], string cities[], int size, string cityName){
    cout << "Multas registradas en " << cityName << ":" << endl;
    float total = 0;
    for(int i = 0; i < size; i++){
        if(cities[i] == cityName){
            cout << plates[i] << " - $" << fines[i] << endl;
            total += fines[i];
        }
    }
    cout << "Total de multas en " << cityName << ": $" << total << endl;
}

void totalFinesByCity(){
    int size = 6;
    string plates[size] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float fines[size] = {250000, 180000, 300000, 450000, 200000, 120000};
    string cities[size] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
    string cityName;
    cout << "Ingrese el nombre de la ciudad: ";
    cin >> cityName;

    printerByCity(plates, fines, cities, size, cityName);
}

int main(){
    totalFinesByCity();
    return 0;
}