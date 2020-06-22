#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = (sizeof(numeros) / sizeof(numeros[0])) - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}