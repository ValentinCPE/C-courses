 #include <iostream>

 using namespace std;

 void exercice5(){
   float choix;

   cout << "Allez, joue avec moi ! Saisie un entier: ";
   cin >> choix;

   if(choix >= 20 && choix <= 30){
        cout << "GAGNE" << endl;
   }else{
        cout << "PERDU" << endl;
   }
}
