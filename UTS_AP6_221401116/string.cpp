#include<iostream>
#include <sstream>  
#include <string>  
using namespace std;
int main()
{
    int angka = 256;
    ostringstream str1;
    str1 << angka;
    string num = str1.str();
    cout << "Angka dalam bentuk string : ";
    cout << num << endl;
 
    return 0;
}