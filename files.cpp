#include<iostream>
#include<fstream>  //file ile �al��abilmek i�in yazd�k. file ; bilgisayar kapand���nda data kayb� olmamas� i�in kullan�l�yor.

using namespace std;

int main(){

    ofstream buckyFile; //�ncelikli olarak file object olu�turduk. �stedi�imiz herhangi bir isimde
    buckyFile.open("tuna.txt"); //tuna.txt adl� bir dosyam�z olmad���ndan o dosyay� olu�turdu ard�ndan a�t�

    buckyFile << "I love tuna and tuna loves me! \n " ; //tuna.txt dosyas�na yazd�rd�k. program� �al��t�rd���m�zda bir ��kt� vermedi.
    buckyFile.close();

}
