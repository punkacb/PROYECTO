#pragma once
#include "Alumno.h"

namespace PROYECTOModel {
    using namespace System;

    ref class Horario;

    public ref class Inscripcion {
    private:
        DateTime fechaInscripcion;
        String^ estado;
        Alumno^ alumno;
        Horario^ horario;

    public:
        Inscripcion();
        Inscripcion(Alumno^ alumno, Horario^ horario);

        DateTime getFechaInscripcion();
        void setFechaInscripcion(DateTime fechaInscripcion);

        String^ getEstado();
        void setEstado(String^ estado);

        Alumno^ getAlumno();
        void setAlumno(Alumno^ alumno);

        Horario^ getHorario();
        void setHorario(Horario^ horario);
    };
}