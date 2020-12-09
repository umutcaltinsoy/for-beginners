#include<iostream>
#include<fstream>  //file ile çalýþabilmek için yazdýk. file ; bilgisayar kapandýðýnda data kaybý olmamasý için kullanýlýyor.

using namespace std;

int main(){

    ofstream buckyFile; //Öncelikli olarak file object oluþturduk. Ýstediðimiz herhangi bir isimde
    buckyFile.open("tuna.txt"); //tuna.txt adlý bir dosyamýz olmadýðýndan o dosyayý oluþturdu ardýndan açtý

    buckyFile << "I love tuna and tuna loves me! \n " ; //tuna.txt dosyasýna yazdýrdýk. programý çalýþtýrdýðýmýzda bir çýktý vermedi.
    buckyFile.close();

}
