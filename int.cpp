#include <iostream>
#include <string>
using namespace std;

int main() {
    // input bilangan bulat
    int num = 895;

    // mengubah bilangan bulat menjadi string
    string str_num = to_string(num);

    // output string
    cout << "Bilangan bulat " << num << " diubah menjadi string: " << str_num << endl;

    return 0;
}       