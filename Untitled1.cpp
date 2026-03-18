#include <iostream>

#include <list>
using namespace std;

int main() {
    int numeros[5] = {2, 3, 4, 5, 6};
    int soma = 0;
    int multiplicacao = 1;

    for(int i = 0; i < 5; i++) {
        soma += numeros[i];
        multiplicacao *= numeros[i];
    }

    cout << "Soma: " << soma << endl;
    cout << "Multiplicacao: " << multiplicacao << endl;

    return 0;
}
