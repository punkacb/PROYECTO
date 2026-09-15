#pragma once
#include "Persona.h"
using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {
    ref class Inscripcion;

    public ref class Alumno : public Persona
    {
    private:
        String^ codigoEstudiante;
        String^ ciclo;

        List<Inscripcion^>^ inscripciones;

    public:
        Alumno();
        Alumno(String^ id, String^ nombre, String^ apellido, String^ correo,
            String^ contrasena, String^ telefono,
            String^ codigoEstudiante, String^ ciclo);

        String^ getCodigoEstudiante();
        void setCodigoEstudiante(String^ codigoEstudiante);
        String^ getCiclo();
        void setCiclo(String^ ciclo);

        void agregarInscripcion(Inscripcion^ inscripcion);
    };
}