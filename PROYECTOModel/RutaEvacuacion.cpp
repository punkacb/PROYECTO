#include "pch.h"
#include "RutaEvacuacion.h"

namespace PROYECTOModel {

    RutaEvacuacion::RutaEvacuacion()
    {
        tipoSiniestro = "";
        descripcionRuta = "";

        ambientes =
            gcnew System::Collections::Generic::List<Ambiente^>();
    }

    RutaEvacuacion::RutaEvacuacion(
        System::String^ tipoSiniestro,
        System::String^ descripcionRuta)
    {
        this->tipoSiniestro = tipoSiniestro;
        this->descripcionRuta = descripcionRuta;

        ambientes =
            gcnew System::Collections::Generic::List<Ambiente^>();
    }

    System::String^ RutaEvacuacion::getTipoSiniestro()
    {
        return tipoSiniestro;
    }

    void RutaEvacuacion::setTipoSiniestro(
        System::String^ tipoSiniestro)
    {
        this->tipoSiniestro = tipoSiniestro;
    }

    System::String^ RutaEvacuacion::getDescripcionRuta()
    {
        return descripcionRuta;
    }

    void RutaEvacuacion::setDescripcionRuta(
        System::String^ descripcionRuta)
    {
        this->descripcionRuta = descripcionRuta;
    }

    System::Collections::Generic::List<Ambiente^>^
        RutaEvacuacion::getAmbientes()
    {
        return ambientes;
    }

    void RutaEvacuacion::setAmbientes(
        System::Collections::Generic::List<Ambiente^>^ ambientes)
    {
        this->ambientes = ambientes;
    }
}