#include <iostream>
#include "exercices.h"

using namespace std;

int main()
{
    int choixMenu;

    do{
        cout << endl << "Choisir un exercice à exécuter de 1 à 13" << endl << "Saisir 0 pour quitter" << endl;
        cin >> choixMenu;

        switch(choixMenu){
            case 1:
                exercice1();
                break;
            case 2:
                exercice2();
                break;
            case 3:
                exercice3();
                break;
            case 4:
                exercice4();
                break;
            case 5:
                exercice5();
                break;
            case 8:
                exercice8();
                break;
            case 9:
                exercice9();
                break;
            case 12:
                exercice12();
                break;
            case 13:
                exercice13();
                break;

            default:
                cout << "Au revoir";
        }
    }while(choixMenu != 0);
}
