#pragma once
#include "Docente.h"
#include "Inscripcion.h"

namespace PROYECTOModel {
    using namespace System;
    using namespace System::Collections::Generic;

    ref class Ambiente;
    ref class ActividadAcademica;
    ref class CheckInClase;

    public ref class Horario {
    private:
        String^ dia;
        TimeSpan horaInicio;
        TimeSpan horaFin;
        Ambiente^ ambiente;
        Docente^ docente;
        ActividadAcademica^ actividad;
        List<Inscripcion^>^ inscripciones;
        List<CheckInClase^>^ checkIns;

    public:
        Horario();
        Horario(String^ dia, TimeSpan horaInicio, TimeSpan horaFin);

        // Getters y Setters
        String^ getDia();
        void setDia(String^ dia);

        TimeSpan getHoraInicio();
        void setHoraInicio(TimeSpan horaInicio);

        TimeSpan getHoraFin();
        void setHoraFin(TimeSpan horaFin);

        Ambiente^ getAmbiente();
        void setAmbiente(Ambiente^ ambiente);

        Docente^ getDocente();
        void setDocente(Docente^ docente);

        ActividadAcademica^ getActividad();
        void setActividad(ActividadAcademica^ actividad);

        List<CheckInClase^>^ getCheckIns();

        // Métodos
        void agregarInscripcion(Inscripcion^ inscripcion);
        void agregarCheckIn(CheckInClase^ checkIn);

        bool esValido();
        bool verificarConflicto(Horario^ otro);
        bool conflictoPorAmbiente(Horario^ otro);
        bool conflictoPorDocente(Horario^ otro);
    };
}