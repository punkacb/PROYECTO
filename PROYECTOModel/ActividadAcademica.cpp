#include "pch.h"
#include "ActividadAcademica.h"

namespace PROYECTOModel {
    ActividadAcademica::ActividadAcademica() {
        tipo = "";
        horario = nullptr;
    }

    ActividadAcademica::ActividadAcademica(String^ tipo, Horario^ horario) {
        this->tipo = tipo;
        this->horario = horario;
    }

    String^ ActividadAcademica::getTipo() { return tipo; }
    void ActividadAcademica::setTipo(String^ tipo) { this->tipo = tipo; }

    Horario^ ActividadAcademica::getHorario() { return horario; }
    void ActividadAcademica::setHorario(Horario^ horario) { this->horario = horario; }
}