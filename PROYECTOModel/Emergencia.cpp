#include "pch.h"
#include "Emergencia.h"

namespace PROYECTOModel {

    Emergencia::Emergencia()
    {
        fechaHora = System::DateTime::Now;
        tipo = "";
        estado = "";
        ubicacionGPS = "";

        persona = nullptr;
        ambiente = nullptr;
        sensor = nullptr;
        atencion = nullptr;

        institucionesExternas =
            gcnew System::Collections::Generic::List<InstitucionExterna^>();
    }

    Emergencia::Emergencia(System::DateTime fechaHora,
        System::String^ tipo,
        System::String^ estado,
        System::String^ ubicacionGPS)
    {
        this->fechaHora = fechaHora;
        this->tipo = tipo;
        this->estado = estado;
        this->ubicacionGPS = ubicacionGPS;

        persona = nullptr;
        ambiente = nullptr;
        sensor = nullptr;
        atencion = nullptr;

        institucionesExternas =
            gcnew System::Collections::Generic::List<InstitucionExterna^>();
    }

    void Emergencia::reportar()
    {
        estado = "Reportada";
    }

    void Emergencia::escalar()
    {
        estado = "Escalada";
    }

    System::DateTime Emergencia::getFechaHora()
    {
        return fechaHora;
    }

    void Emergencia::setFechaHora(System::DateTime fechaHora)
    {
        this->fechaHora = fechaHora;
    }

    System::String^ Emergencia::getTipo()
    {
        return tipo;
    }

    void Emergencia::setTipo(System::String^ tipo)
    {
        this->tipo = tipo;
    }

    System::String^ Emergencia::getEstado()
    {
        return estado;
    }

    void Emergencia::setEstado(System::String^ estado)
    {
        this->estado = estado;
    }

    System::String^ Emergencia::getUbicacionGPS()
    {
        return ubicacionGPS;
    }

    void Emergencia::setUbicacionGPS(System::String^ ubicacionGPS)
    {
        this->ubicacionGPS = ubicacionGPS;
    }

    Persona^ Emergencia::getPersona()
    {
        return persona;
    }

    void Emergencia::setPersona(Persona^ persona)
    {
        this->persona = persona;
    }

    Ambiente^ Emergencia::getAmbiente()
    {
        return ambiente;
    }

    void Emergencia::setAmbiente(Ambiente^ ambiente)
    {
        this->ambiente = ambiente;
    }

    Sensor^ Emergencia::getSensor()
    {
        return sensor;
    }

    void Emergencia::setSensor(Sensor^ sensor)
    {
        this->sensor = sensor;
    }

    AtencionEmergencia^ Emergencia::getAtencion()
    {
        return atencion;
    }

    void Emergencia::setAtencion(AtencionEmergencia^ atencion)
    {
        this->atencion = atencion;
    }

    System::Collections::Generic::List<InstitucionExterna^>^ Emergencia::getInstitucionesExternas()
    {
        return institucionesExternas;
    }

    void Emergencia::setInstitucionesExternas(
        System::Collections::Generic::List<InstitucionExterna^>^ institucionesExternas)
    {
        this->institucionesExternas = institucionesExternas;
    }
}