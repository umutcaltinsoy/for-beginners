#include<iostream>
using namespace std;

int main(){

     try {
     int num1;
     cout<< "Enter the first number : " << endl;
     cin>>num1;

     int num2;
     cout<< " Enter the seconde number : " << endl;
     cin>>num2;
     if(num2==0){
        throw 0;
     }
     cout<< num1/num2 << endl;


     } catch(int x ){           // catch (...) olursa aşağıda by 0 yazmamız gerekli

         cout<< " you cant divede by " << x <<endl;   //yukarıda ki durum için 0 kalkacak

     }



}
