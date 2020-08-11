#include<iostream>
#include<stdlib.h>

using namespace std;

void isOrdered(int vector[], int size);

void isOrdered(int vector[], int size) {
    for(int i = 1; i < size; i++) {
        if(vector[i] < vector[i - 1]) {
            cout << "is not increasingly ordered" << endl;
            return;
        }
    }
    cout << "is increasingly ordered" << endl;
}

int main() {
    const int size = 5;
    int vector[size] = {1,4,9,13,17};

    isOrdered(vector,size);
    system("pause");
    return 0;
}