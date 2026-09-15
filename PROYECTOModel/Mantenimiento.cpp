#include "pch.h"
#include "Mantenimiento.h"

namespace PROYECTOModel {

    Mantenimiento::Mantenimiento()
    {
        fecha = System::DateTime::Now;
        tipo = "";
        descripcion = "";
        costo = 0.0;
    }

    Mantenimiento::Mantenimiento(System::DateTime fecha, System::String^ tipo,
        System::String^ descripcion, double costo)
    {
        this->fecha = fecha;
        this->tipo = tipo;
        this->descripcion = descripcion;
        this->costo = costo;
    }

    System::DateTime Mantenimiento::getFecha()
    {
        return fecha;
    }

    void Mantenimiento::setFecha(System::DateTime fecha)
    {
        this->fecha = fecha;
    }

    System::String^ Mantenimiento::getTipo()
    {
        return tipo;
    }

    void Mantenimiento::setTipo(System::String^ tipo)
    {
        this->tipo = tipo;
    }

    System::String^ Mantenimiento::getDescripcion()
    {
        return descripcion;
    }

    void Mantenimiento::setDescripcion(System::String^ descripcion)
    {
        this->descripcion = descripcion;
    }

    double Mantenimiento::getCosto()
    {
        return costo;
    }

    void Mantenimiento::setCosto(double costo)
    {
        this->costo = costo;
    }
}