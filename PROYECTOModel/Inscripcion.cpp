#include "pch.h"
#include "Inscripcion.h"

namespace PROYECTOModel {
    Inscripcion::Inscripcion() {
        fechaInscripcion = DateTime::MinValue;
        estado = "";
        alumno = nullptr;
        horario = nullptr;
    }

    Inscripcion::Inscripcion(Alumno^ alumno, Horario^ horario) {
        this->alumno = alumno;
        this->horario = horario;
        this->fechaInscripcion = DateTime::Now;
        this->estado = "Activa";
    }

    DateTime Inscripcion::getFechaInscripcion() { return fechaInscripcion; }
    void Inscripcion::setFechaInscripcion(DateTime fechaInscripcion) { this->fechaInscripcion = fechaInscripcion; }

    String^ Inscripcion::getEstado() { return estado; }
    void Inscripcion::setEstado(String^ estado) { this->estado = estado; }

    Alumno^ Inscripcion::getAlumno() { return alumno; }
    void Inscripcion::setAlumno(Alumno^ alumno) { this->alumno = alumno; }

    Horario^ Inscripcion::getHorario() { return horario; }
    void Inscripcion::setHorario(Horario^ horario) { this->horario = horario; }
}