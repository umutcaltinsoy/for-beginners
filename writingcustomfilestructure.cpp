#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream theFile("players.txt");

    cout<< " Enters players ID,Names and Money " << endl;
    cout<< "press ctrl+z to quit\n " << endl;

    int idNumber;
    string name;
    double money;

    while(cin >> idNumber >> name >> money ){


        theFile << idNumber << ' ' << name << ' ' << money <<endl;


    }



}
