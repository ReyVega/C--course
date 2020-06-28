#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int array[] = {4,5,2,1,3},
        array2[] = {4,5,2,1,3};
    int n = sizeof(array) / sizeof(array[0]),
        n2 = sizeof(array2) / sizeof(array2[0]),
        tmp = 0;

    //Ascendente
    for(int i = 0; i < (n - 1); i++) {
        for(int j = 0; j < (n - i - 1); j++) {
            if(array[j] > array[j + 1]) {
                tmp =  array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    //Descendente
    for(int i = 0; i < (n2 - 1); i++) {
        for(int j = 0; j < (n2 - i - 1); j++) {
            if(array2[j] < array2[j + 1]) {
                tmp =  array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = tmp;
            }
        }
    }

    //Ascendente
    cout << "Ascendente:" << endl;
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    //Descendente
    cout << "Descendente:" << endl;
    for(int i = 0; i < n2; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}