 #include <iostream>
 #include <iomanip>

 using namespace std;


void exercice13(){
    cout << "Utilisation des manipulateurs" << endl << endl;

    cout << setfill('.');
    cout << setw(10) << left << "Nom:" << "|" << setw(8) << right << "Guevara" << endl;
    cout << setw(10) << left << "Prenom:" << "|" << setw(8) << right << "Valentin" << endl;
    cout << setw(10) << left << "Age:" << "|" << setw(8) << right << "19" << endl;
}
