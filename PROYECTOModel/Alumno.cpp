#include "pch.h"
#include "Alumno.h"

namespace PROYECTOModel {
    Alumno::Alumno() : Persona() {
        inscripciones = gcnew List<Inscripcion^>();
    }

    Alumno::Alumno(String^ id, String^ nombre, String^ apellido, String^ correo,
        String^ contrasena, String^ telefono,
        String^ codigoEstudiante, String^ ciclo)
        : Persona(id, nombre, apellido, correo, contrasena, telefono) {
        this->codigoEstudiante = codigoEstudiante;
        this->ciclo = ciclo;
        inscripciones = gcnew List<Inscripcion^>();
    }

    String^ Alumno::getCodigoEstudiante() { return codigoEstudiante; }
    void Alumno::setCodigoEstudiante(String^ codigoEstudiante) { this->codigoEstudiante = codigoEstudiante; }
    String^ Alumno::getCiclo() { return ciclo; }
    void Alumno::setCiclo(String^ ciclo) { this->ciclo = ciclo; }

    void Alumno::agregarInscripcion(Inscripcion^ inscripcion) {
        inscripciones->Add(inscripcion);
    }
}