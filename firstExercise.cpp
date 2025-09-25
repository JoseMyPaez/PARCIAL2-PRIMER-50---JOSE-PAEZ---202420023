#include <iostream>

using namespace std;

int calculateTotal(int hours, int rate){
    return hours * rate;
}

void printInvoice(string plate, int hours, int rate) {
    cout<<"Vehiculo"<<plate<<", Horas: "<<hours<<", Tarifa:"<<rate <<endl;
    cout<<"Total a pagar: "<<calculateTotal(hours, rate)<<endl;
}

int main(){
    string plate;
    int HoursParking, ratePerHour;
    cout<<"Dame la placa del vehiculo: ";
    cin >> plate;
    cout <<"Dame las horas de estacionamiento: ";
    cin >> HoursParking;
    cout <<"Dame la tarifa por hora: ";
    cin >> ratePerHour;
    calculateTotal(HoursParking, ratePerHour);
    printInvoice(plate, HoursParking, ratePerHour);

    return 0;
}