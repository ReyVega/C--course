#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra1[] = "123",
         palabra2[] = "123.45";
    int numero1 = atoi(palabra1);
    double numero2 = atof(palabra2);

    cout << numero1 << endl;
    cout << numero2 << endl;

    system("pause");
    return 0;
}