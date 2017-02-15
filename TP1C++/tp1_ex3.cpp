 #include <iostream>

 using namespace std;

 void exercice3(){
    int i = 0;

    do{
    cout << "Saisir un entier quelconque ou -1 pour quitter: ";
    cin >> i;


    if(i % 2 != 0){
        cout << "Le nombre est impair" << endl;
    }else{
        cout << "Le nombre est pair" << endl;
    }
    }while(i != -1);

    cout << "A la prochaine fois" << endl;
}
