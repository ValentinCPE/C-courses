#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void exercice1();
void exercice2();
void exercice3();
void exercice4_1();
void exercice4_2();
void exercice5();

int main()
{
    exercice5();

}
////////////////////////////////////////
void exercice1(){
    int a;
    int &ref_a = a;
    int *p_a = &a;

    cout << "Donner un entier: ";
    cin >> a;
    cout << endl << "Le contenu des variables:" << endl;
    cout << "- variable a : " << a << endl;
    cout << "- variable ref_a : " << ref_a << endl;
    cout << "- variable p_a : " << p_a << endl;
    cout << "Leur adresse : " << endl;
    cout << "- adresse de a : " << &a << endl;
    cout << "- adresse de ref_a : " << &ref_a << endl;
    cout << "- adresse de p_a : " << &p_a << endl;
    cout << "La valeur pointee : " <<  *p_a << endl;
}
//////////////////////////////////////////
void incrementer(int *i){
    *i+=1;
}

void permuter_adresse(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int permuter_ref(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void exercice2(){
    int a = 4,b = 10;
    int &ref_a = a;
    int &ref_b = b;

    cout << "Avant incrementation de a et b : a = " << a << " b = " << b << endl;

    incrementer(&a);
    incrementer(&b);

    cout << "Apres incrementation de a et b : a = " << a << " b = " << b << endl;

    permuter_adresse(&a,&b);

    cout << "Apres permutation par adresse de a et b : a = " << a << " b = " << b << endl;

    permuter_ref(&a,&b);

    cout << "Apres permutation par reference de a et b : a = " << a << " b = " << b << endl;
}
/////////////////////////////////////////////////////
void exercice3(){
    std::string prenom;
    std::string *p_prenom = &prenom;


    cout << "Saisir un prenom ";
    cin >> *p_prenom;

    cout << endl << "Le prenom est : " << *p_prenom;


}
//////////////////////////////////////////////////////
int addition(int a = 0, int b = 0, int c = 0){
    return a+b+c;
}

double addition(double a = 0, double b = 0, double c = 0){
    return a+b+c;
}

void exercice4_1(){
    int a = 2, b = 4, c = 8;
    double d_a = 2.2, d_b = 4.4, d_c = 8.8;

    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    cout << "Parametre par default : a + b = " << addition(a,b) << endl;
    cout << "Parametre par default : a + b + c  = " << addition(a,b,c) << endl << endl;

    cout << "a = " << d_a << " b = " << d_b << " c = " << d_c << endl;
    cout << "Surcharge de fonction avec double: a + b = " << addition(d_a,d_b) << endl;
    cout << "Surcharge de fonction avec double: a + b + c  = " << addition(d_a,d_b,d_c);
}
/////////////////////////////////////////////////////////
int conversion_seconde(int h=0, int m=0, int s=0){
    int seconds;

    seconds = h * 3600;
    seconds = seconds + (m * 60);
    seconds = seconds + s;

    return seconds;
}

void exercice4_2(){
    int hour, minute, second;

    cout << "Saisir nombre d'heures : ";
    cin >> hour;
    cout << endl << "Minutes : ";
    cin >> minute;

    //commenté pour tester valeur par défaut fonction
    //cout << endl << "Secondes : ";
    //cin >> second;

    // hour = 8;
    //minute = 26;

    cout << endl << conversion_seconde(hour, minute, second);
    }
////////////////////////////////////////////////////
void exercice5(){
    std::string nom;
    std::string age;

    cout << "Saisir votre nom : ";
    cin >> nom;
    cout << endl << "Saisir votre age : ";
    cin >> age;

    ofstream donnees("/home/valentin/Documents/IUT/C++/TP2_C++/donnees.txt");

    if(donnees){
       donnees << "Le nom est : " << nom << endl;
       donnees << "L'age est : " << age << ".";
       cout << endl << "Transfert réussi";
    }
    else{
        cout << "Probleme dans l'ouverture du fichier" << endl;
    }
}

