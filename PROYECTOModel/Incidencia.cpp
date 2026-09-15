#include "pch.h"
#include "Incidencia.h"

namespace PROYECTOModel {

    Incidencia::Incidencia()
    {
        fecha = System::DateTime::Now;
        descripcion = "";
        estado = "";
        prioridad = "";

        activo = nullptr;
        reportante = nullptr;
        tecnicoAsignado = nullptr;

        notificaciones = gcnew System::Collections::Generic::List<Notificacion^>();
    }

    Incidencia::Incidencia(System::DateTime fecha,
        System::String^ descripcion,
        System::String^ estado,
        System::String^ prioridad)
    {
        this->fecha = fecha;
        this->descripcion = descripcion;
        this->estado = estado;
        this->prioridad = prioridad;

        activo = nullptr;
        reportante = nullptr;
        tecnicoAsignado = nullptr;

        notificaciones = gcnew System::Collections::Generic::List<Notificacion^>();
    }

    System::DateTime Incidencia::getFecha()
    {
        return fecha;
    }

    void Incidencia::setFecha(System::DateTime fecha)
    {
        this->fecha = fecha;
    }

    System::String^ Incidencia::getDescripcion()
    {
        return descripcion;
    }

    void Incidencia::setDescripcion(System::String^ descripcion)
    {
        this->descripcion = descripcion;
    }

    System::String^ Incidencia::getEstado()
    {
        return estado;
    }

    void Incidencia::setEstado(System::String^ estado)
    {
        this->estado = estado;
    }

    System::String^ Incidencia::getPrioridad()
    {
        return prioridad;
    }

    void Incidencia::setPrioridad(System::String^ prioridad)
    {
        this->prioridad = prioridad;
    }

    Activo^ Incidencia::getActivo()
    {
        return activo;
    }

    void Incidencia::setActivo(Activo^ activo)
    {
        this->activo = activo;
    }

    Persona^ Incidencia::getReportante()
    {
        return reportante;
    }

    void Incidencia::setReportante(Persona^ reportante)
    {
        this->reportante = reportante;
    }

    Administrador^ Incidencia::getTecnicoAsignado()
    {
        return tecnicoAsignado;
    }

    void Incidencia::setTecnicoAsignado(Administrador^ tecnicoAsignado)
    {
        this->tecnicoAsignado = tecnicoAsignado;
    }

    System::Collections::Generic::List<Notificacion^>^ Incidencia::getNotificaciones()
    {
        return notificaciones;
    }

    void Incidencia::setNotificaciones(
        System::Collections::Generic::List<Notificacion^>^ notificaciones)
    {
        this->notificaciones = notificaciones;
    }
}