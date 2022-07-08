#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra;
    cout << "Digite uma palavra ou uma frase: ";
    getline(cin, palavra);
    for (int i = palavra.size()-1; i >= 0; i--){
        cout << palavra[i];
    }
    return 0;
