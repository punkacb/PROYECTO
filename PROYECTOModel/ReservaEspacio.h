#pragma once
#include "Persona.h"

namespace PROYECTOModel {
    using namespace System;

    ref class Ambiente;

    public ref class ReservaEspacio {
    private:
        DateTime fecha;
        TimeSpan horaInicio;
        TimeSpan horaFin;
        String^ motivo;
        String^ estado;
        Ambiente^ ambiente;
        Persona^ persona;

    public:
        ReservaEspacio();
        ReservaEspacio(DateTime fecha, TimeSpan horaInicio, TimeSpan horaFin,
            String^ motivo, Ambiente^ ambiente, Persona^ persona);

        DateTime getFecha();
        void setFecha(DateTime fecha);

        TimeSpan getHoraInicio();
        void setHoraInicio(TimeSpan horaInicio);

        TimeSpan getHoraFin();
        void setHoraFin(TimeSpan horaFin);

        String^ getMotivo();
        void setMotivo(String^ motivo);

        String^ getEstado();
        void setEstado(String^ estado);

        Ambiente^ getAmbiente();
        void setAmbiente(Ambiente^ ambiente);

        Persona^ getPersona();
        void setPersona(Persona^ persona);
    };
}