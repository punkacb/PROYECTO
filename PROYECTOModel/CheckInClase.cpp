#include "pch.h"
#include "CheckInClase.h"

namespace PROYECTOModel {
    CheckInClase::CheckInClase() {
        fecha = DateTime::MinValue;
        horaCheckIn = TimeSpan::Zero;
        horaCheckOut = TimeSpan::Zero;
        horario = nullptr;
    }

    CheckInClase::CheckInClase(DateTime fecha, TimeSpan horaCheckIn, Horario^ horario) {
        this->fecha = fecha;
        this->horaCheckIn = horaCheckIn;
        this->horaCheckOut = TimeSpan::Zero;
        this->horario = horario;
    }

    DateTime CheckInClase::getFecha() { return fecha; }
    void CheckInClase::setFecha(DateTime fecha) { this->fecha = fecha; }

    TimeSpan CheckInClase::getHoraCheckIn() { return horaCheckIn; }
    void CheckInClase::setHoraCheckIn(TimeSpan horaCheckIn) { this->horaCheckIn = horaCheckIn; }

    TimeSpan CheckInClase::getHoraCheckOut() { return horaCheckOut; }
    void CheckInClase::setHoraCheckOut(TimeSpan horaCheckOut) { this->horaCheckOut = horaCheckOut; }

    Horario^ CheckInClase::getHorario() { return horario; }
    void CheckInClase::setHorario(Horario^ horario) { this->horario = horario; }
}