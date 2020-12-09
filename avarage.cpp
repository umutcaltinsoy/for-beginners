#include<iostream>

using namespace std;

int main(){

int numOfStudents;
double avarage;
int count,curr,sum;

cout<< " Please enter the number of students in class " <<endl;
cin>>numOfStudents;
sum=0;

cout << " Enter the students grades " << endl;

for(count=1;count<=numOfStudents;count++){

    cin>>curr;
    sum+=curr;

}

avarage = (double)sum / (double)numOfStudents;
cout << "The average is " << avarage <<endl;

}
