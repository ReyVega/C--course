#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[] = "REYNALDO";

    strlwr(palabra);

    cout << palabra << endl;

    system("pause");
    return 0;
}