#include <iostream>

using namespace std;

bool isValidAmount(int amount){
    return amount % 50 == 0;
}

void dispenseBills(int amount){
    int bills200 = 0, bills100 = 0, bills50 = 0;
    while (amount > 0)
    {
        if (amount >= 200)
        {
            bills200++;
            amount -= 200;
        } else if (amount >= 100)
        {
            bills100++;
            amount -= 100;
        } else if (amount >= 50)
        {
            bills50++;
            amount -= 50;
        }
        
    }
    cout<<"Billetes de 200: "<<bills200<<endl;
    cout<<"Billetes de 100: "<<bills100<<endl;
    cout<<"Billetes de 50: "<<bills50<<endl;
}
    
int main(){
    int amount;
    cout<<"Dame la cantidad a retirar: ";
    cin >> amount;
    if (isValidAmount(amount)==false)
    {
        cout<<"Monto no valido, debe ser multiplo de 50"<<endl;
    } else
    {
        dispenseBills(amount);
    }
       
    return 0;
}