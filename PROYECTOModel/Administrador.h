#pragma once
#include "Persona.h"
using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {
    ref class Rol;
    ref class Mantenimiento;
    ref class Incidencia;
    ref class AtencionEmergencia;

    public ref class Administrador : public Persona
    {
    private:
        String^ cargo;

        List<Rol^>^ roles;
        List<Mantenimiento^>^ mantenimientosAsignados;
        List<Incidencia^>^ incidenciasAsignadas;
        List<AtencionEmergencia^>^ atencionesEmergencia;

    public:
        Administrador();
        Administrador(String^ id, String^ nombre, String^ apellido, String^ correo,
            String^ contrasena, String^ telefono, String^ cargo);

        String^ getCargo();
        void setCargo(String^ cargo);

        void agregarRol(Rol^ rol);
        void agregarMantenimientoAsignado(Mantenimiento^ mantenimiento);
        void agregarIncidenciaAsignada(Incidencia^ incidencia);
        void agregarAtencionEmergencia(AtencionEmergencia^ atencion);
    };
}