 #include <iostream>

 using namespace std;

 void exercice4(){
   float longueur, largeur;
   cout << "Saisir la longueur du champ de blé : ";
   cin >> longueur;
   cout << endl << "Saisir la largeur du champ de blé : ";
   cin >> largeur;

   float perimetre = 2*(longueur+largeur);
   float surface = longueur*largeur;

   cout << endl << "Le périmetre est de " << perimetre << " et la surface est de " << surface;
}
