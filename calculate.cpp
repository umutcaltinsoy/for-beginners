#include<iostream>
using namespace std;

int main(){
bool seenEndOfInput;
int sum, numOfStudents;
int curr;
double avarage;

cout<< "enter grades" << endl;
cout<< "-1 typ" << endl;
sum = 0;
numOfStudents=0;
seenEndOfInput=false;
while(seenEndOfInput==false){

    cin>>curr;
    if(curr==-1){
        seenEndOfInput=true;
    }
    else{
        sum += curr;
        numOfStudents++;

    }
}
avarage = (double)sum / (double)numOfStudents;
cout<< "avarage is : " <<avarage <<endl;
return 0;

}
