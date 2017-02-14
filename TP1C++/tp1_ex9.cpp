 #include <iostream>

 using namespace std;


void exercice9(){
    int a, b=3;

    cout << "Saisir un N : ";
    cin >> a;
    for(int i = 0 ; i < a; i++){
        b = 3 * b + 4;
    }
    cout << "U(n) = " << b;
}
