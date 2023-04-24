#include <iostream> 
using namespace std; 
int main(){ 
    
    int a,b,c,x; 
    char abjad = 'a'; 
    
    cout << "masukkan nilai baris : "; 
    cin >> x; 

    //perulangan baris awal 
    for (a= 1; a < x; a++) {  
    cout << abjad++; 
    } 
        for (a=x; a >= 1; a--) { 
        cout << abjad--; 
    } 
    cout << endl; 

    //perulangan baris 
    for (a= 1; a<= x; a++) { 
    abjad = 'a'; 
    
    //perulangan baris awal sampe abjad  
        for (b= 1; b<= x-a; b++) {  
            cout << abjad++; 
        } 
        
        //perulangan membuat segitiga 
        for (b= 1; b<= 2*a-1; b++) {  
            cout << " "; 
        } 
        
        //perulangan sampai a 
        for (c= 1; c<= x-a; c++) {  
             cout << --abjad; 
         } 
         
    cout << endl; 
    } 
    
    return 0; 
}