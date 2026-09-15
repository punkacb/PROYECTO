#include "pch.h"
#include "InstitucionExterna.h"

namespace PROYECTOModel {

    InstitucionExterna::InstitucionExterna()
    {
        nombre = "";
        tipo = "";
        telefono = "";

        emergencias =
            gcnew System::Collections::Generic::List<Emergencia^>();
    }

    InstitucionExterna::InstitucionExterna(
        System::String^ nombre,
        System::String^ tipo,
        System::String^ telefono)
    {
        this->nombre = nombre;
        this->tipo = tipo;
        this->telefono = telefono;

        emergencias =
            gcnew System::Collections::Generic::List<Emergencia^>();
    }

    void InstitucionExterna::contactar()
    {
        // Preparado para implementar el contacto con la institución.
    }

    void InstitucionExterna::enviarDatosAPI()
    {
        // Preparado para la integración API de la versión 2.
    }

    System::String^ InstitucionExterna::getNombre()
    {
        return nombre;
    }

    void InstitucionExterna::setNombre(System::String^ nombre)
    {
        this->nombre = nombre;
    }

    System::String^ InstitucionExterna::getTipo()
    {
        return tipo;
    }

    void InstitucionExterna::setTipo(System::String^ tipo)
    {
        this->tipo = tipo;
    }

    System::String^ InstitucionExterna::getTelefono()
    {
        return telefono;
    }

    void InstitucionExterna::setTelefono(System::String^ telefono)
    {
        this->telefono = telefono;
    }

    System::Collections::Generic::List<Emergencia^>^
        InstitucionExterna::getEmergencias()
    {
        return emergencias;
    }

    void InstitucionExterna::setEmergencias(
        System::Collections::Generic::List<Emergencia^>^ emergencias)
    {
        this->emergencias = emergencias;
    }
}