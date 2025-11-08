#include <iostream>
#include <string>

using namespace std;

int main() {
	float a, b, soma, sub, mult, div;
	cout << "Digite o primeiro numero: ";
	cin >> a;
	cout << "Digite o segundo numero ";
	cin >> b;
	
    soma = a + b;
    sub = a - b;
    mult = a * b;
    
    cout << "A soma: " << soma << "\n";
    cout << "A subtracao: " << sub << "\n";
    cout << "A multiplicacao: " << mult << "\n";
    
     if(b != 0){
    div = a / b;
    cout << "a divisao: " << div << endl; 
    } else {
    	cout << "Erro: Divisao por zero nao e permitida" << endl; 
	}
    

    return 0;
}
