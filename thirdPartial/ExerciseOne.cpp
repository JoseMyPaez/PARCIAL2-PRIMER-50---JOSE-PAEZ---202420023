#include<iostream>

using namespace std;

/*Ejercicio 1: Contar palabras y la más larga
Crea un programa que reciba una frase ingresada por el usuario y determine:
1. Cuántas palabras tiene la frase.
2. Cuál es la palabra más larga.
El programa debe ignorar los espacios adicionales y considerar una palabra como una
secuencia de caracteres separada por un espacio.
Ejemplo de entrada:
frase = "Programar en C++ es muy divertido";
Ejemplo de salida:
Cantidad de palabras: 5
Palabra más larga: divertido
*/

int wordCounter(string text){
    int counter = 0;
    bool inWord = false;
    for(int i = 0; i < text.length(); i++){
        if(text[i] != ' ' && !inWord){
            inWord = true;
            counter++;
        } else if(text[i] == ' '){
            inWord = false;
        }
    }
    return counter;
}

string longestWord(string text){
    string longest = "";
    string current = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] != ' '){
            current += text[i];
        }
        if(current.length() >= longest.length()){
            longest = current;    
        }
        if(text[i]==' '){
            current="";
        }
    }
    return longest;
}

void phaseCounterAndLongestWord(){
    string phrase;
    cout << "Ingrese una frase: ";
    getline(cin, phrase);

    cout << "Cantidad de palabras: " << wordCounter(phrase) << endl;
    cout << "Palabra más larga: " << longestWord(phrase) << endl;
}

int main(){
    phaseCounterAndLongestWord();
    return 0;
}
