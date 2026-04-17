#include "Woman.cpp"
#include "Man.cpp"
#include "Person.cpp"


int main(){

    Woman camille ("Camille" , "Brunel" , 40);
    Man joan ("Joan" , "Cami" , 40);

    camille.display();
    cout << endl;
    joan.display();
    cout << endl;

    camille.setPartner(joan);
    joan.setPartner(camille);

    camille.display();
    cout << endl;
    joan.display();
    cout << endl;


};