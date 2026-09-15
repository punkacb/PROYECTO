#include "pch.h"
#include "Rol.h"

namespace PROYECTOModel {
    Rol::Rol() {
        permisos = gcnew List<Permiso^>();
    }

    Rol::Rol(String^ idRol, String^ nombre) {
        this->idRol = idRol;
        this->nombre = nombre;
        permisos = gcnew List<Permiso^>();
    }

    String^ Rol::getIdRol() { return idRol; }
    void Rol::setIdRol(String^ idRol) { this->idRol = idRol; }
    String^ Rol::getNombre() { return nombre; }
    void Rol::setNombre(String^ nombre) { this->nombre = nombre; }

    void Rol::agregarPermiso(Permiso^ permiso) {
        permisos->Add(permiso);
    }
}