#pragma once

namespace PROYECTOModel {
    using namespace System;

    ref class Horario;

    public ref class ActividadAcademica {
    private:
        String^ tipo;
        Horario^ horario;

    public:
        ActividadAcademica();
        ActividadAcademica(String^ tipo, Horario^ horario);

        String^ getTipo();
        void setTipo(String^ tipo);

        Horario^ getHorario();
        void setHorario(Horario^ horario);
    };
}