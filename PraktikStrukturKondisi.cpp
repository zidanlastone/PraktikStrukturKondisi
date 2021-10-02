// PraktikStrukturKondisi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void calculateScore(string name, int score1, int score2, int score3) {

    string resultText = "";

    if (score1 == NULL) {
        throw "Score1 can't be null";
    }

    if (score2 == NULL) {
        throw "Score2 can't be null";
    }

    if (score3 == NULL) {
        throw "Score3 can't be null";
    }

    int average = (score1 + score2 + score3) / 3;
    if (average >= 85) 
    {
        resultText = "Mendapatkan komputer core i5";
    }
    else if (average >= 70) 
    {
        resultText = "Mendapatkan hadiah uang Rp. 2.500.000";
    }
    else {
        resultText = "Mendapatkan Hadiah Hiburan";
    }

    cout << name << "Nilai rata-ratanya adalah :"<< average << " maka dia mendapatkan " << resultText << endl;

    return;
}

int main()
{
    int age, score1, score2, score3;
    string name;
    string output;

    cout << "Perkenalkan diri anda!\n";
    cout << "Masukan Nama:";
    cin  >> name;
    cout << "Masukan Umur anda:";
    cin >> age;

    if (name.empty()) {
        throw "Name can't null";
    }

    if (age == 0 || age == NULL) {
        throw "age can't 0 or NULL";
    }

    cout << "Nama anda " << name << " dan Umur anda " << age << endl;

    cout << "Masukan Score 1:";
    cin >> score1;

    cout << "Masukan Score 2:";
    cin >> score2;

    cout << "Masukan Score 3:";
    cin >> score3;

    calculateScore(name, score1, score2, score3);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
