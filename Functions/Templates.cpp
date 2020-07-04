#include<iostream>
#include<stdlib.h>

using namespace std;

template<class E>
void absoluto(E dato) {
    if(dato < 0) {
        dato *= -1;
    }
    cout << "Valor absoluto: " << dato << endl;
}

int main() {
    int n1 = -4;
    float n2 = -56.67;
    double n3 = -123.5678;

    absoluto(n1);
    absoluto(n2);
    absoluto(n3);
    system("pause");
    return 0;
}