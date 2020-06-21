#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int i = 1;

    cout << "Ascendente" << endl;
    do {
         cout << i << endl;
         i++;
     } while(i <= 10);

    i = 10;
    cout << "\nDescendente" << endl;
    do {
         cout << i << endl;
         i--;
     } while(i >= 1);

    system("pause");
    return 0;
}