#include <iostream>
using namespace std;

// Función swap
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 20;
    int b = 10;


    //Valores iniciales y direccion de memoria 
    cout << "\nValores iniciales:\n";
    cout << "\na = " << a << " --- Direccion de memoria: " << &a << '\n';
    cout << "b = " << b << " --- Direccion de memoria: " << &b << '\n';

    
    swap(a, b);

    //Valores swap y direccion de memoria
    cout << "\n\nDespues del swap:\n";
    cout << "\na = " << a << " --- Direccion de memoria: " << &a << '\n';
    cout << "b = " << b << " --- Direccion de memoria: " << &b << '\n';

    return 0;
}