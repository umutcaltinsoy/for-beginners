#include<iostream>
#include<fstream>

using namespace std;

int main(){

ofstream theObject("objects.txt");

cout<< " enter object names and powers" << endl;
cout<< " press ctrl+z to quit " << endl;

string name;
double power;

while(cin >> name >> power){
theObject << name << ' ' << power << endl;

}

}
