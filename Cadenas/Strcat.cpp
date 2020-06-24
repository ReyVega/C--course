#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra1[] = "Esto es una cadena",
         palabra2[] = " de ejemplo",
         palabra3[30];

    strcpy(palabra3,palabra1);
    strcat(palabra3,palabra2);

    cout << palabra3 << endl;
    system("pause"); 
    return 0;
}