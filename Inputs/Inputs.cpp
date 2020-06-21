#include<iostream>
#include<string>

using namespace std;

int main() {
    int entero = 0;
    long longo = 0L;
    float flotante = 0.0f;
    double doble = 0.0;
    char letra;
    string palabra = "";

    cout << "Digite un entero:\n";
    cin >> entero;
    cout << endl;

    cout << "Digite un Long:\n";
    cin >> longo;
    cout << endl;

    cout << "Digite un flotante:\n";
    cin >> flotante;
    cout << endl;

    cout << "Digite un double:\n";
    cin >> doble;
    cout << endl;

    cout << "Digite un char:\n";
    cin >> letra;
    cout << endl;

    cout << "Digite un String:\n";
    cin >> palabra;
    cout << endl;

    cout << entero << endl;
    cout << longo << endl;
    cout << flotante << endl;
    cout << doble << endl;
    cout << letra << endl;
    cout << palabra << endl;
}