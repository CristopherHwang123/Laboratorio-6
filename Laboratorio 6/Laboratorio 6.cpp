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

    virtual void obtenerInfo() { // Hacer la función virtual
        cout << "\nMarca: " << marca << "\nModelo : " << modelo << "\nPrecio : $" << precio << endl;
    }

    string getMarca() const {
        return marca;
    }

    void setMarca(const string& Marca) {
        this->marca = Marca;  
    }

    string getModelo() const {
        return modelo;
    }

    void setModelo(const string& Modelo) {
        this->modelo = Modelo;  
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
    int puertas;
public:
    Automovil(string _marca, string _modelo, int _precio, int _puertas) : Vehiculo(_marca,_modelo, _precio), puertas(_puertas) {
        puertas = _puertas;
    }
    
    void obtenerInfo() override { // Sobreescribe la función
        Vehiculo::obtenerInfo();
        cout << "Numero de puertas: " << puertas << endl;
    }
};

class Motorcicleta : public Vehiculo {
private:
    int cilindrada;
public:
    Motorcicleta(string _marca, string _modelo, int _precio, int _cilindrada) : Vehiculo(_marca, _modelo, _precio), cilindrada(_cilindrada) {
        cilindrada = _cilindrada;
    }

    void obtenerInfo() override { // Sobreescribe la función
        Vehiculo::obtenerInfo();
        cout << "La cilindrada es de: " << cilindrada << endl;
    }
};

class Camioneta : public Vehiculo {
private:
    int capacidad;
public: 
    Camioneta(string _marca, string _modelo, int _precio, int _capacidad) : Vehiculo(_marca, _modelo, _precio), capacidad(_capacidad) {
        capacidad = _capacidad;
    }

    void obtenerInfo() override { // Sobreescribe la función
        Vehiculo::obtenerInfo();
        cout << "La capacidad es de: " << capacidad << " KG" << endl;
    }
};

class Cliente {
private: 
    int edad;
    string nombre;
public: 
    Cliente(int _edad, string _nombre) {
        edad = _edad;
        nombre = _nombre;
    }

    void comprarVehiculo(Vehiculo* v) {  
        cout << nombre << " ha comprado un:  " << endl;
        v->obtenerInfo(); 
        cout << endl;
    }
};


int main()
{
    Camioneta ca1("Toyota", "Toyata rav", 120000, 2000);
    Motorcicleta m1("Yamaha", "R1", 15000, 1000);
    Automovil a1("Mazda", "Mazda 6xg", 100000, 4);
    Cliente c1(24, "Juan Carlos");

    c1.comprarVehiculo(&ca1);
    c1.comprarVehiculo(&m1);
    c1.comprarVehiculo(&a1);
}
