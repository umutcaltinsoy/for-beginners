#include<iostream>

using namespace std;

int main(){

int num;
int sumDigits,countDigits ;
int currDigit;

cout<< "Please enter a positive integer" <<endl;
cin>>num;

sumDigits=0;
countDigits=0;
while(num>0){
    currDigit=num%10;
    countDigits++;
    sumDigits += currDigit;
    num = num/10;



}
cout<<num<< "  has " << countDigits<< "Digits";
cout<< endl << "and their sum is : " << sumDigits << endl;

return 0;





}






