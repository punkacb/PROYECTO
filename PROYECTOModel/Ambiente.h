#pragma once

namespace PROYECTOModel {
    using namespace System;
    using namespace System::Collections::Generic;

    ref class Piso;
    ref class Activo;
    ref class RegistroAcceso;
    ref class Horario;
    ref class ReservaEspacio;
    ref class Emergencia;
    ref class RutaEvacuacion;
    ref class ControlAforo;

    public ref class Ambiente {
    private:
        String^ nombre;
        String^ tipo;
        int capacidad;
        Piso^ piso;
        List<Activo^>^ activos;
        List<RegistroAcceso^>^ registrosAcceso;
        List<Horario^>^ horarios;
        List<ReservaEspacio^>^ reservas;
        List<Emergencia^>^ emergencias;
        List<RutaEvacuacion^>^ rutasEvacuacion;
        ControlAforo^ controlAforo;

    public:
        Ambiente();
        Ambiente(String^ nombre, String^ tipo, int capacidad, Piso^ piso);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getTipo();
        void setTipo(String^ tipo);

        int getCapacidad();
        void setCapacidad(int capacidad);

        Piso^ getPiso();
        void setPiso(Piso^ piso);

        ControlAforo^ getControlAforo();
        void setControlAforo(ControlAforo^ controlAforo);

        List<Activo^>^ getActivos();
        void agregarActivo(Activo^ activo);

        List<RegistroAcceso^>^ getRegistrosAcceso();
        void agregarRegistroAcceso(RegistroAcceso^ registro);

        List<Horario^>^ getHorarios();
        void agregarHorario(Horario^ horario);

        List<ReservaEspacio^>^ getReservas();
        void agregarReserva(ReservaEspacio^ reserva);

        List<Emergencia^>^ getEmergencias();
        void agregarEmergencia(Emergencia^ emergencia);

        List<RutaEvacuacion^>^ getRutasEvacuacion();
        void agregarRutaEvacuacion(RutaEvacuacion^ ruta);
    };
}