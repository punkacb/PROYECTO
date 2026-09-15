#include "pch.h"
#include "AtencionEmergencia.h"

namespace PROYECTOModel {

    AtencionEmergencia::AtencionEmergencia()
    {
        horaAceptacion = System::DateTime::MinValue;
        horaLlegada = System::DateTime::MinValue;
        horaResolucion = System::DateTime::MinValue;
        estado = "";

        emergencia = nullptr;
        administrador = nullptr;
    }

    AtencionEmergencia::AtencionEmergencia(
        System::DateTime horaAceptacion,
        System::DateTime horaLlegada,
        System::DateTime horaResolucion,
        System::String^ estado)
    {
        this->horaAceptacion = horaAceptacion;
        this->horaLlegada = horaLlegada;
        this->horaResolucion = horaResolucion;
        this->estado = estado;

        emergencia = nullptr;
        administrador = nullptr;
    }

    System::DateTime AtencionEmergencia::getHoraAceptacion()
    {
        return horaAceptacion;
    }

    void AtencionEmergencia::setHoraAceptacion(System::DateTime horaAceptacion)
    {
        this->horaAceptacion = horaAceptacion;
    }

    System::DateTime AtencionEmergencia::getHoraLlegada()
    {
        return horaLlegada;
    }

    void AtencionEmergencia::setHoraLlegada(System::DateTime horaLlegada)
    {
        this->horaLlegada = horaLlegada;
    }

    System::DateTime AtencionEmergencia::getHoraResolucion()
    {
        return horaResolucion;
    }

    void AtencionEmergencia::setHoraResolucion(System::DateTime horaResolucion)
    {
        this->horaResolucion = horaResolucion;
    }

    System::String^ AtencionEmergencia::getEstado()
    {
        return estado;
    }

    void AtencionEmergencia::setEstado(System::String^ estado)
    {
        this->estado = estado;
    }

    Emergencia^ AtencionEmergencia::getEmergencia()
    {
        return emergencia;
    }

    void AtencionEmergencia::setEmergencia(Emergencia^ emergencia)
    {
        this->emergencia = emergencia;
    }

    Administrador^ AtencionEmergencia::getAdministrador()
    {
        return administrador;
    }

    void AtencionEmergencia::setAdministrador(Administrador^ administrador)
    {
        this->administrador = administrador;
    }
}