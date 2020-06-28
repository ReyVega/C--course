#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int array[] = {5,3,4,1,2},
        array2[] = {5,3,4,1,2};
    int n = sizeof(array) / sizeof(array[0]),
        n2 = sizeof(array2) / sizeof(array2[0]),
        key = 0,
        j = 0;

    //Ascendente
    for(int i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        while((j >= 0) && (array[j] > key)) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    //Descendente
    for(int i = 1; i < n2; i++) {
        key = array2[i];
        j = i - 1;

        while((j >= 0) && (array2[j] < key)) {
            array2[j + 1] = array2[j];
            j--;
        }

        array2[j + 1] = key;
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