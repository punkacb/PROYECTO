#pragma once

namespace PROYECTOModel {

    ref class Persona;
    ref class Ambiente;
    ref class Sensor;
    ref class AtencionEmergencia;
    ref class InstitucionExterna;

    public ref class Emergencia
    {
    private:
        System::DateTime fechaHora;
        System::String^ tipo;
        System::String^ estado;
        System::String^ ubicacionGPS;

        Persona^ persona;
        Ambiente^ ambiente;
        Sensor^ sensor;
        AtencionEmergencia^ atencion;
        System::Collections::Generic::List<InstitucionExterna^>^ institucionesExternas;

    public:
        Emergencia();

        Emergencia(System::DateTime fechaHora,
            System::String^ tipo,
            System::String^ estado,
            System::String^ ubicacionGPS);

        void reportar();
        void escalar();

        System::DateTime getFechaHora();
        void setFechaHora(System::DateTime fechaHora);

        System::String^ getTipo();
        void setTipo(System::String^ tipo);

        System::String^ getEstado();
        void setEstado(System::String^ estado);

        System::String^ getUbicacionGPS();
        void setUbicacionGPS(System::String^ ubicacionGPS);

        Persona^ getPersona();
        void setPersona(Persona^ persona);

        Ambiente^ getAmbiente();
        void setAmbiente(Ambiente^ ambiente);

        Sensor^ getSensor();
        void setSensor(Sensor^ sensor);

        AtencionEmergencia^ getAtencion();
        void setAtencion(AtencionEmergencia^ atencion);

        System::Collections::Generic::List<InstitucionExterna^>^ getInstitucionesExternas();
        void setInstitucionesExternas(
            System::Collections::Generic::List<InstitucionExterna^>^ institucionesExternas);
    };
}