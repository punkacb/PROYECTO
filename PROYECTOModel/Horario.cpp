#include "pch.h"
#include "Horario.h"
#include "ActividadAcademica.h"

namespace PROYECTOModel {
    Horario::Horario() {
        dia = "";
        horaInicio = TimeSpan::Zero;
        horaFin = TimeSpan::Zero;
        ambiente = nullptr;
        docente = nullptr;
        actividad = nullptr;
        inscripciones = gcnew List<Inscripcion^>();
        checkIns = gcnew List<CheckInClase^>();
    }

    Horario::Horario(String^ dia, TimeSpan horaInicio, TimeSpan horaFin) {
        this->dia = dia;
        this->horaInicio = horaInicio;
        this->horaFin = horaFin;
        this->ambiente = nullptr;
        this->docente = nullptr;
        this->actividad = nullptr;
        this->inscripciones = gcnew List<Inscripcion^>();
        this->checkIns = gcnew List<CheckInClase^>();
    }

    String^ Horario::getDia() { return dia; }
    void Horario::setDia(String^ dia) { this->dia = dia; }

    TimeSpan Horario::getHoraInicio() { return horaInicio; }
    void Horario::setHoraInicio(TimeSpan horaInicio) { this->horaInicio = horaInicio; }

    TimeSpan Horario::getHoraFin() { return horaFin; }
    void Horario::setHoraFin(TimeSpan horaFin) { this->horaFin = horaFin; }

    Ambiente^ Horario::getAmbiente() { return ambiente; }
    void Horario::setAmbiente(Ambiente^ ambiente) { this->ambiente = ambiente; }

    Docente^ Horario::getDocente() { return docente; }
    void Horario::setDocente(Docente^ docente) { this->docente = docente; }

    ActividadAcademica^ Horario::getActividad() { return actividad; }
    void Horario::setActividad(ActividadAcademica^ actividad) { this->actividad = actividad; }

    List<CheckInClase^>^ Horario::getCheckIns() { return checkIns; }

    void Horario::agregarInscripcion(Inscripcion^ inscripcion) {
        inscripciones->Add(inscripcion);
    }

    void Horario::agregarCheckIn(CheckInClase^ checkIn) {
        checkIns->Add(checkIn);
    }

    bool Horario::esValido() {
        return horaInicio < horaFin;
    }

    bool Horario::verificarConflicto(Horario^ otro) {
        if (!dia->Equals(otro->getDia())) {
            return false;
        }
        return (horaInicio < otro->getHoraFin()) && (otro->getHoraInicio() < horaFin);
    }

    bool Horario::conflictoPorAmbiente(Horario^ otro) {
        if (!verificarConflicto(otro)) {
            return false;
        }
        if (ambiente == nullptr || otro->getAmbiente() == nullptr) {
            return false;
        }
        return Object::ReferenceEquals(ambiente, otro->getAmbiente());
    }

    bool Horario::conflictoPorDocente(Horario^ otro) {
        if (!verificarConflicto(otro)) {
            return false;
        }
        if (docente == nullptr || otro->getDocente() == nullptr) {
            return false;
        }
        return Object::ReferenceEquals(docente, otro->getDocente());
    }
}