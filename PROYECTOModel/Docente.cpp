#include "pch.h"
#include "Docente.h"

namespace PROYECTOModel {
    Docente::Docente() : Persona() {
        horarios = gcnew List<Horario^>();
    }

    Docente::Docente(String^ id, String^ nombre, String^ apellido, String^ correo,
        String^ contrasena, String^ telefono,
        String^ codigoDocente, String^ departamento)
        : Persona(id, nombre, apellido, correo, contrasena, telefono) {
        this->codigoDocente = codigoDocente;
        this->departamento = departamento;
        horarios = gcnew List<Horario^>();
    }

    String^ Docente::getCodigoDocente() { return codigoDocente; }
    void Docente::setCodigoDocente(String^ codigoDocente) { this->codigoDocente = codigoDocente; }
    String^ Docente::getDepartamento() { return departamento; }
    void Docente::setDepartamento(String^ departamento) { this->departamento = departamento; }

    void Docente::agregarHorario(Horario^ horario) {
        horarios->Add(horario);
    }
}