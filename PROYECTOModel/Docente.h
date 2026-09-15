#pragma once
#include "Persona.h"
using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {
    ref class Horario;

    public ref class Docente : public Persona
    {
    private:
        String^ codigoDocente;
        String^ departamento;

        List<Horario^>^ horarios;

    public:
        Docente();
        Docente(String^ id, String^ nombre, String^ apellido, String^ correo,
            String^ contrasena, String^ telefono,
            String^ codigoDocente, String^ departamento);

        String^ getCodigoDocente();
        void setCodigoDocente(String^ codigoDocente);
        String^ getDepartamento();
        void setDepartamento(String^ departamento);

        void agregarHorario(Horario^ horario);
    };
}