#include <iostream>
#include <string>

class Usuario {
protected:
    std::string nombre;
    std::string apellidos;
    std::string email;

public:
    void setUsuario(const std::string& nombre,
                    const std::string& apellidos,
                    const std::string& email) {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->email = email;
    }
};

class Operario : public Usuario {
private:
    std::string departamento;

public:
    void setDepartamento(const std::string& departamento) {
        this->departamento = departamento;
    }

    void printOperario() const {
        std::cout << nombre << " "
                  << apellidos << " "
                  << email << " "
                  << departamento << "\n";
    }
};

class Manager : public Usuario {
private:
    std::string rol;

public:
    void setRol(const std::string& rol) {
        this->rol = rol;
    }

    void printManager() const {
        std::cout << nombre << " "
                  << apellidos << " "
                  << email << " "
                  << rol << "\n";
    }
};

int main() {
    Operario usuario1;
    Manager usuario2;

    usuario1.setUsuario("Juan", "Perez", "juan@perez.com");
    usuario1.setDepartamento("Ventas");
    usuario1.printOperario();

    usuario2.setUsuario("Maria", "Lopez", "maria@lopez.com");
    usuario2.setRol("Calidad");
    usuario2.printManager();

    return 0;
}
