#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra1[] = "reconocer",
         palabra2[100];

    strcpy(palabra2,palabra1);

    if(strcmp(palabra1,strrev(palabra2)) == 0){
        cout << "La palabra es polindrome" << endl;
    } else {
        cout << "La palabra no es polindrome" << endl;
    }
    system("pause");
    return 0;
}