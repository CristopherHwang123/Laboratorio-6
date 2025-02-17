#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
private:
    string marca;
    string modelo;
    int precio;
public:
    Vehiculo(string _marca, string _modelo, int _precio) {
        marca = _marca;
        modelo = _modelo;
        precio = _precio;
    }

    void minfo() {
        cout << "La marca del carro es: " << marca << endl;
        cout << "El modelo del carro es: " << modelo << endl;
        cout << "El precio del carro es: " << precio << endl;
    }

    // Métodos getter
    string getMarca() const {
        return marca;
    }

    // Métodos setter
    void setMarca(const string& Marca) {
        this->marca = Marca;  // Corregido: asignamos 'Marca' al atributo 'marca'
    }

    string getModelo() const {
        return modelo;
    }

    void setModelo(const string& Modelo) {
        this->modelo = Modelo;  // Corregido: asignamos 'Modelo' al atributo 'modelo'
    }

    int getPrecio() const {
        return precio;
    }

    void setPrecio(int precio) {
        this->precio = precio;
    }
};

class Automovil : public Vehiculo {
private:

};

int main()
{
    std::cout << "Hello World!\n";
}
