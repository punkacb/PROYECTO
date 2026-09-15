#include "pch.h"
#include "ReservaEspacio.h"

namespace PROYECTOModel {
    ReservaEspacio::ReservaEspacio() {
        fecha = DateTime::MinValue;
        horaInicio = TimeSpan::Zero;
        horaFin = TimeSpan::Zero;
        motivo = "";
        estado = "Pendiente";
        ambiente = nullptr;
        persona = nullptr;
    }

    ReservaEspacio::ReservaEspacio(DateTime fecha, TimeSpan horaInicio, TimeSpan horaFin,
        String^ motivo, Ambiente^ ambiente, Persona^ persona) {
        this->fecha = fecha;
        this->horaInicio = horaInicio;
        this->horaFin = horaFin;
        this->motivo = motivo;
        this->ambiente = ambiente;
        this->persona = persona;
        this->estado = "Pendiente";
    }

    DateTime ReservaEspacio::getFecha() { return fecha; }
    void ReservaEspacio::setFecha(DateTime fecha) { this->fecha = fecha; }

    TimeSpan ReservaEspacio::getHoraInicio() { return horaInicio; }
    void ReservaEspacio::setHoraInicio(TimeSpan horaInicio) { this->horaInicio = horaInicio; }

    TimeSpan ReservaEspacio::getHoraFin() { return horaFin; }
    void ReservaEspacio::setHoraFin(TimeSpan horaFin) { this->horaFin = horaFin; }

    String^ ReservaEspacio::getMotivo() { return motivo; }
    void ReservaEspacio::setMotivo(String^ motivo) { this->motivo = motivo; }

    String^ ReservaEspacio::getEstado() { return estado; }
    void ReservaEspacio::setEstado(String^ estado) { this->estado = estado; }

    Ambiente^ ReservaEspacio::getAmbiente() { return ambiente; }
    void ReservaEspacio::setAmbiente(Ambiente^ ambiente) { this->ambiente = ambiente; }

    Persona^ ReservaEspacio::getPersona() { return persona; }
    void ReservaEspacio::setPersona(Persona^ persona) { this->persona = persona; }
}