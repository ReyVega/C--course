#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[] = "Reynaldo";

    strrev(palabra);
    
    cout << palabra << endl;
    system("pause");
    return 0;
}