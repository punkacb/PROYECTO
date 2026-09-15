#include "pch.h"
#include "Permiso.h"

namespace PROYECTOModel {
    Permiso::Permiso() {
        roles = gcnew List<Rol^>();
    }

    Permiso::Permiso(String^ idPermiso, String^ nombre, String^ descripcion) {
        this->idPermiso = idPermiso;
        this->nombre = nombre;
        this->descripcion = descripcion;
        roles = gcnew List<Rol^>();
    }

    String^ Permiso::getIdPermiso() { return idPermiso; }
    void Permiso::setIdPermiso(String^ idPermiso) { this->idPermiso = idPermiso; }
    String^ Permiso::getNombre() { return nombre; }
    void Permiso::setNombre(String^ nombre) { this->nombre = nombre; }
    String^ Permiso::getDescripcion() { return descripcion; }
    void Permiso::setDescripcion(String^ descripcion) { this->descripcion = descripcion; }

    void Permiso::agregarRol(Rol^ rol) {
        roles->Add(rol);
    }
}