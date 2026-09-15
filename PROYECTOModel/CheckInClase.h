#pragma once

namespace PROYECTOModel {
    using namespace System;

    ref class Horario;

    public ref class CheckInClase {
    private:
        DateTime fecha;
        TimeSpan horaCheckIn;
        TimeSpan horaCheckOut;
        Horario^ horario;

    public:
        CheckInClase();
        CheckInClase(DateTime fecha, TimeSpan horaCheckIn, Horario^ horario);

        DateTime getFecha();
        void setFecha(DateTime fecha);

        TimeSpan getHoraCheckIn();
        void setHoraCheckIn(TimeSpan horaCheckIn);

        TimeSpan getHoraCheckOut();
        void setHoraCheckOut(TimeSpan horaCheckOut);

        Horario^ getHorario();
        void setHorario(Horario^ horario);
    };
}