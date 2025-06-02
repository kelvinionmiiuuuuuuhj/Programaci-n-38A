#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    // Propiedades (atributos)
    string nombre;
    string especie;
    int edad;
    double peso;

public:
    // Constructor
    Animal(string _nombre, string _especie, int _edad, double _peso) {
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
        peso = _peso;
    }

    // Método 1: Mostrar información
    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Especie: " << especie << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Peso: " << peso << " kg" << endl;
    }

    // Método 2: Comer
    void comer(string comida) {
        cout << nombre << " está comiendo " << comida << "." << endl;
    }

    // Método 3: Dormir
    void dormir() {
        cout << nombre << " está durmiendo." << endl;
    }

    // Método 4: Hacer sonido
    void hacerSonido() {
        cout << nombre << " hace un sonido típico de un(a) " << especie << "." << endl;
    }
};

int main() {
    // Crear un objeto de la clase Animal
    Animal miAnimal("Luna", "Perro", 3, 12.5);

    // Usar los métodos
    miAnimal.mostrarInformacion();
    miAnimal.comer("croquetas");
    miAnimal.dormir();
    miAnimal.hacerSonido();

    return 0;
}
