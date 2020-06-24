#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[30];

    cout << "Ingrese una palabra: ";
    cin.getline(palabra,30,'\n');

    int length = strlen(palabra);

    if(length <= 10) {
        cout << palabra << endl;
    } else {
        system("pause");
        return 0;
    }

    system("pause");
    return 0;
}