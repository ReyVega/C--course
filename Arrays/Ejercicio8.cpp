#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int array1[] = {1,2,3,4,5,6};
    int n = (sizeof(array1) / sizeof(array1[0]));
    int array2[n];

    for(int i = 0; i < n; i++) {
        array2[i] = array1[i] * 2;
    }

    for(int i = 0; i < n; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}