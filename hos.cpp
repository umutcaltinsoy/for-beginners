#include<iostream>

using namespace std;
template<class bucky>           // bu þekilde þablon fonksiyon tanýmlarsak "bucky" gibi int,double,float yerine daha kullanýþlý olur
bucky addCrap(bucky a, bucky b){
    return a+b;

}


int main(){
double x=7.2 , y=43.12 ,z;
    z=addCrap(x,y);
    cout<<z<<endl;
    int r=1,t=2,u;
    u=addCrap(r,t);
    cout<< u << endl;



}
