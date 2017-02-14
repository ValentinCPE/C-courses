 #include <iostream>

 using namespace std;


void exercice12(){
    int saisi,fact = 1;

    cout << "Saisir un entier N : ";
    cin >> saisi;

    for(int i = 1; i < saisi+1; i++){
        fact = fact * i;
    }

    cout << fact;
}
