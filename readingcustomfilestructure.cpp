#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream theFile("players.txt");  //ifstream bir dosyadan data alınmasını ve okunmasını sağlar.

    int id;
    string name;   // players.txt dosyasında yazdığımız veriler.
    double money;

    while(theFile >> id >> name >> money){ // data girerken cin kullanmıştık burada farklı

        cout<< id << " " << name << " " << money << endl;


    }

}
