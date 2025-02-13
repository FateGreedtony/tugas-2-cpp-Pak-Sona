#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    char operasi;
    double a, b, result;

    cout << "Masukkan bilangan pertama" << endl;
    cin >> a;
    cout << "Masukkan bilangan kedxua" << endl;
    cin >> b;

    cout << "Pilih operator! [+, -, *, /]" << endl;
    cin >> operasi;

    if(operasi == '*')
        result = a * b;
    else if(operasi == '+')
        result = a + b;
    else if(operasi == '-')
        result = a - b;
    else if(operasi == '/')
        result = a / b;
    else{
        cout << "Inputanmu salah!";
    }
    

    cout << "hasilnya adalah: " << result;

    return 0;
}