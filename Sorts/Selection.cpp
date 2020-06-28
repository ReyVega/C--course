#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int array1[] = {4,3,1,5,2},
        array2[] = {4,3,1,5,2};
    int n = sizeof(array1) / sizeof(array1[0]),
        n2 = sizeof(array2) / sizeof(array2[0]),
        min = 0,
        tmp = 0;

    //Ascendente
    for(int i = 0; i < (n - 1); i++) {
        min = i;

        for(int j = i + 1; j < n; j++) {
            if(array1[j] < array1[min]) {
                min = j;
            }
        }
        tmp = array1[min];
        array1[min] = array1[i];
        array1[i] = tmp;
    }

    //Descendente
    for(int i = 0; i < (n2 - 1); i++) {
        min = i;

        for(int j = i + 1; j < n2; j++) {
            if(array2[j] > array2[min]) {
                min = j;
            }
        }
        tmp = array2[min];
        array2[min] = array2[i];
        array2[i] = tmp;
    }

    //Ascendente
    cout << "Ascendente:" << endl;
    for(int i = 0; i < n; i++) {
        cout << array1[i] << " ";
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