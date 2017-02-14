 #include <iostream>

 using namespace std;


void exercice8(){
    int tableau[10];
    int pluspetit;

    cout << "Saisir 10 entiers afin d'afficher le plus petit" << endl;

    for(int i = 0; i < 10; i++){
        cout << i + 1 << ": ";
        cin >> tableau[i];
    }

    pluspetit = tableau[0];
    for(int j = 0; j < 9 ; j++){
        if(tableau[j+1] < pluspetit){
            pluspetit = tableau[j+1];
        }
    }
    cout << pluspetit;
}

