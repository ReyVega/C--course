#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char frase[30];
    int a = 0,
        e = 0,
        i = 0,
        o = 0,
        u = 0;

    cout << "Ingresa una frase: ";
    cin.getline(frase,30,'\n');

    
    for(int i = 0; i < strlen(frase); i++) {
        switch (frase[i]) {
            case 'a':
                a++;
                break;

            case 'e':
                e++;
                break;

            case 'i':
                i++;
                break;

            case 'o':
                o++;
                break;

            case 'u':
                u++;
                break;
        }
    }

    cout << "Vocal a: " << a << endl;
    cout << "Vocal e: " << e << endl;
    cout << "Vocal i: " << i << endl;
    cout << "Vocal o: " << o << endl;
    cout << "Vocal u: " << u << endl;

    system("pause");
    return 0;
}