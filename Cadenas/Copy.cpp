#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char nombre[] = "Reynaldo",
         nombre2[20];
    strcpy(nombre2,nombre);
    cout << nombre2 << endl;
    system("pause");
    return 0;
}