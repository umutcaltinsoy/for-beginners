#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream buckysFile("beefjerky.txt");
    if(buckysFile.is_open()){   //dosyan�n a��k olup olmad���n� kontrol etmek i�in
        cout << " ok the file is open" << endl;
    }else {
    cout << " Bucky you messed up" << endl;

    }


    buckysFile << "I love the beef \n " ;
    buckysFile.close();
}
