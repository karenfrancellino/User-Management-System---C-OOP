#include <iostream>
using namespace std;

class Usuario{
    protected:
        string nombre;
        string apellidos;
        string email;
    public:
        void setUsuario(string nombre, string apellidos, string email){
            this->nombre = nombre;
            this->apellidos = apellidos;
            this->email = email;
        }
};

class Operario:  public Usuario {
    private:
        string departamento;
    public:
        void setDepartamento(string departamento){
            this->departamento = departamento;
        }
        void printOperario(){
            cout << this->nombre + " " +
                    this->apellidos + " " +
                    this->email + " " +
                    this->departamento << "\n";
        }
};

class Manager: public Usuario {
    private:
        string rol;
    public:
        void setRol(string rol){
            this->rol = rol;
        }
        void printManager(){
            cout << this->nombre + " " +
                    this->apellidos + " " +
                    this->email + " " +
                    this->rol << "\n";
        }
};

int main(){
    Operario usuario1;
    Manager usuario2;
    usuario1.setUsuario("Juan","Perez","juan@perez.com");
    usuario1.setDepartamento("Ventas");
    usuario1.printOperario();
    usuario2.setUsuario("Maria","Lopez","maria@lopez.com");
    usuario2.setRol("Calidad");
    usuario2.printManager();
    cin.get();
    return 0;
}