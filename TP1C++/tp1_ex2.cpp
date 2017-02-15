 #include <iostream>

 using namespace std;

 void exercice2(){
    int i=69,j=33;

    cout << "Première et seconde variable avant échange: 1) " << i << " 2) " << j << endl;
    int temp = i;
    i = j;
    j = temp;
    cout << "Première et seconde variable après échange: 1) " << i << " 2) " << j << endl;
}

