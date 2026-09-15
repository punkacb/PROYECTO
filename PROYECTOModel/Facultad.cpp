#include "pch.h"
#include "Facultad.h"

namespace PROYECTOModel {
    Facultad::Facultad() {
        nombre = "";
        ubicacion = "";
        pisos = gcnew List<Piso^>();
        simulacros = gcnew List<Simulacro^>();
    }

    Facultad::Facultad(String^ nombre, String^ ubicacion) {
        this->nombre = nombre;
        this->ubicacion = ubicacion;
        this->pisos = gcnew List<Piso^>();
        this->simulacros = gcnew List<Simulacro^>();
    }

    String^ Facultad::getNombre() { return nombre; }
    void Facultad::setNombre(String^ nombre) { this->nombre = nombre; }

    String^ Facultad::getUbicacion() { return ubicacion; }
    void Facultad::setUbicacion(String^ ubicacion) { this->ubicacion = ubicacion; }

    List<Piso^>^ Facultad::getPisos() { return pisos; }
    List<Simulacro^>^ Facultad::getSimulacros() { return simulacros; }

    void Facultad::agregarPiso(Piso^ piso) {
        pisos->Add(piso);
    }

    void Facultad::agregarSimulacro(Simulacro^ simulacro) {
        simulacros->Add(simulacro);
    }
}