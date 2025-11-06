#include<iostream>

using namespace std;

/*Ejercicio 2: Filtrar ciudades por rango de temperatura
Crea un programa que tenga dos arreglos paralelos:
Uno con los nombres de las ciudades.
Otro con sus temperaturas promedio.
El programa debe:
1. Pedir al usuario una temperatura mínima y una temperatura máxima.
2. Mostrar las ciudades cuyas temperaturas estén dentro del rango.
3. Calcular el promedio de las temperaturas de las ciudades dentro del rango.
Listas a usar:
string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga",
"Manizales", "Tunja", "Santa Marta", "Villavicencio"};
float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
Ejemplo de entrada:
Temperatura mínima: 20
Temperatura máxima: 28
Ejemplo de salida:
Ciudades dentro del rango (20 - 28 °C):
Medellín - 25.1 °C
Cali - 27.8 °C
Pereira - 22.7 °C
Bucaramanga - 26.2 °C
Promedio de temperaturas dentro del rango: 25.45 °C*/

void temperatureInRangeandAverage(string cities[], float temperatures[], int size, float minTemp, float maxTemp){
    cout << "Ciudades dentro del rango (" << minTemp << " - " << maxTemp << " °C):" << endl;
    float sum = 0;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(temperatures[i] >= minTemp && temperatures[i] <= maxTemp){
            cout << cities[i] << " - " << temperatures[i] << "°C" << endl;
            sum += temperatures[i];
            count++;
        }
    }
    float average =  sum / count;
    cout<<"Promedio de temperaturas dentro del rango: "<<average<<" °C"<<endl;
}

void filterCitiesByTemperature(){
    int size =10;
    string cities[size] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga","Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperatures[size] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
    float minTemp, maxTemp;
    cout << "Ingrese la temperatura mínima: ";
    cin >> minTemp;
    cout << "Ingrese la temperatura máxima: ";
    cin >> maxTemp;

    temperatureInRangeandAverage(cities, temperatures, size, minTemp, maxTemp);
}

int main(){
    filterCitiesByTemperature();
}