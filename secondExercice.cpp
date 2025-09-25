#include <iostream>

using namespace std;

bool isCorrect(char userAnswer, char correctAnswer) {
    return userAnswer == correctAnswer;
}

int questionScore(bool correct) {
    if(correct) {
        return 10;
    } else {
        return 0;
    }
}

void playQuiz(){
    int totalScore = 0;
    char answer1, answer2, answer3;
    char correctAnswer1 = 'b';
    char correctAnswer2 = 'a';
    char correctAnswer3 = 'c';
    cout<<"Dame tu  respuesta a la pregunta 1: ";
    cin >> answer1;
    totalScore += questionScore(isCorrect(answer1, correctAnswer1));
    cout<<"Dame tu  respuesta a la pregunta 2: ";
    cin >> answer2;
    totalScore += questionScore(isCorrect(answer2, correctAnswer2));
    cout<<"Dame tu  respuesta a la pregunta 3: ";
    cin >> answer3;
    totalScore += questionScore(isCorrect(answer3, correctAnswer3));
    cout<<"Tu puntaje total es: "<<totalScore<<endl;

}
int main(){
    playQuiz();
}