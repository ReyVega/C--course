#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    char letras1[] = {'a','b','c','d','e'},
         letras2[] = {'f','g','h','i','j'};
    int n = (sizeof(letras1) / sizeof(letras1[0])) + (sizeof(letras2) / sizeof(letras2[0]));
    char letras3[n];

    for(int i = 0; i < (n / 2); i++) {
        letras3[i] = letras1[i];
    }

    for(int i = (n / 2); i < n; i++) {
        letras3[i] = letras2[i - (n / 2)];
    }

    for(int i = 0; i < n; i++) {
        cout << letras3[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}