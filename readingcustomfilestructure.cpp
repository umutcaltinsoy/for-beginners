#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream theFile("players.txt");  //ifstream bir dosyadan data al�nmas�n� ve okunmas�n� sa�lar.

    int id;
    string name;   // players.txt dosyas�nda yazd���m�z veriler.
    double money;

    while(theFile >> id >> name >> money){ // data girerken cin kullanm��t�k burada farkl�

        cout<< id << " " << name << " " << money << endl;


    }

}
