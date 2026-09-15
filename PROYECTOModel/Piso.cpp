#include "pch.h"
#include "Piso.h"

namespace PROYECTOModel {
    Piso::Piso() {
        numero = 0;
        descripcion = "";
        facultad = nullptr;
        ambientes = gcnew List<Ambiente^>();
    }

    Piso::Piso(int numero, String^ descripcion, Facultad^ facultad) {
        this->numero = numero;
        this->descripcion = descripcion;
        this->facultad = facultad;
        this->ambientes = gcnew List<Ambiente^>();
    }

    int Piso::getNumero() { return numero; }
    void Piso::setNumero(int numero) { this->numero = numero; }

    String^ Piso::getDescripcion() { return descripcion; }
    void Piso::setDescripcion(String^ descripcion) { this->descripcion = descripcion; }

    Facultad^ Piso::getFacultad() { return facultad; }
    void Piso::setFacultad(Facultad^ facultad) { this->facultad = facultad; }

    List<Ambiente^>^ Piso::getAmbientes() { return ambientes; }
    void Piso::agregarAmbiente(Ambiente^ ambiente) {
        ambientes->Add(ambiente);
    }
}