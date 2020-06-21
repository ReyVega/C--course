#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int i = 1;
    cout << "Ascendente:" << endl;
    while(i <= 10) {
        cout << i << endl;
        i++;
    }
    cout << endl;
    cout << "Descendente:" << endl;
    i = 10;
    while(i >= 1) {
        cout << i << endl;
        i--;
    }
    getch();
    return 0;
}