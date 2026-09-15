#pragma once

namespace PROYECTOModel {

    ref class Emergencia;
    ref class Administrador;

    public ref class AtencionEmergencia
    {
    private:
        System::DateTime horaAceptacion;
        System::DateTime horaLlegada;
        System::DateTime horaResolucion;
        System::String^ estado;

        Emergencia^ emergencia;
        Administrador^ administrador;

    public:
        AtencionEmergencia();

        AtencionEmergencia(
            System::DateTime horaAceptacion,
            System::DateTime horaLlegada,
            System::DateTime horaResolucion,
            System::String^ estado);

        System::DateTime getHoraAceptacion();
        void setHoraAceptacion(System::DateTime horaAceptacion);

        System::DateTime getHoraLlegada();
        void setHoraLlegada(System::DateTime horaLlegada);

        System::DateTime getHoraResolucion();
        void setHoraResolucion(System::DateTime horaResolucion);

        System::String^ getEstado();
        void setEstado(System::String^ estado);

        Emergencia^ getEmergencia();
        void setEmergencia(Emergencia^ emergencia);

        Administrador^ getAdministrador();
        void setAdministrador(Administrador^ administrador);
    };
}