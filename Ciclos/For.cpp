#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    cout << "Ascendente" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    cout << "\nDescendente" << endl;
    for(int i = 10; i >= 1; i--) {
        cout << i << endl;
    }
    system("pause");
    return 0;
}