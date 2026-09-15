#include "pch.h"
#include "Administrador.h"

namespace PROYECTOModel {
    Administrador::Administrador() : Persona() {
        roles = gcnew List<Rol^>();
        mantenimientosAsignados = gcnew List<Mantenimiento^>();
        incidenciasAsignadas = gcnew List<Incidencia^>();
        atencionesEmergencia = gcnew List<AtencionEmergencia^>();
    }

    Administrador::Administrador(String^ id, String^ nombre, String^ apellido, String^ correo,
        String^ contrasena, String^ telefono, String^ cargo)
        : Persona(id, nombre, apellido, correo, contrasena, telefono) {
        this->cargo = cargo;
        roles = gcnew List<Rol^>();
        mantenimientosAsignados = gcnew List<Mantenimiento^>();
        incidenciasAsignadas = gcnew List<Incidencia^>();
        atencionesEmergencia = gcnew List<AtencionEmergencia^>();
    }

    String^ Administrador::getCargo() { return cargo; }
    void Administrador::setCargo(String^ cargo) { this->cargo = cargo; }

    void Administrador::agregarRol(Rol^ rol) {
        roles->Add(rol);
    }
    void Administrador::agregarMantenimientoAsignado(Mantenimiento^ mantenimiento) {
        mantenimientosAsignados->Add(mantenimiento);
    }
    void Administrador::agregarIncidenciaAsignada(Incidencia^ incidencia) {
        incidenciasAsignadas->Add(incidencia);
    }
    void Administrador::agregarAtencionEmergencia(AtencionEmergencia^ atencion) {
        atencionesEmergencia->Add(atencion);
    }
}