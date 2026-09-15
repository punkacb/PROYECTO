#include "pch.h"
#include "Simulacro.h"

namespace PROYECTOModel {

    Simulacro::Simulacro()
    {
        fechaHora = System::DateTime::Now;
        tipoSiniestro = "";
        tiempoEvacuacion = 0.0;
        numeroParticipantes = 0;

        facultades =
            gcnew System::Collections::Generic::List<Facultad^>();
    }

    Simulacro::Simulacro(
        System::DateTime fechaHora,
        System::String^ tipoSiniestro,
        double tiempoEvacuacion,
        int numeroParticipantes)
    {
        this->fechaHora = fechaHora;
        this->tipoSiniestro = tipoSiniestro;
        this->tiempoEvacuacion = tiempoEvacuacion;
        this->numeroParticipantes = numeroParticipantes;

        facultades =
            gcnew System::Collections::Generic::List<Facultad^>();
    }

    System::DateTime Simulacro::getFechaHora()
    {
        return fechaHora;
    }

    void Simulacro::setFechaHora(System::DateTime fechaHora)
    {
        this->fechaHora = fechaHora;
    }

    System::String^ Simulacro::getTipoSiniestro()
    {
        return tipoSiniestro;
    }

    void Simulacro::setTipoSiniestro(System::String^ tipoSiniestro)
    {
        this->tipoSiniestro = tipoSiniestro;
    }

    double Simulacro::getTiempoEvacuacion()
    {
        return tiempoEvacuacion;
    }

    void Simulacro::setTiempoEvacuacion(double tiempoEvacuacion)
    {
        this->tiempoEvacuacion = tiempoEvacuacion;
    }

    int Simulacro::getNumeroParticipantes()
    {
        return numeroParticipantes;
    }

    void Simulacro::setNumeroParticipantes(int numeroParticipantes)
    {
        this->numeroParticipantes = numeroParticipantes;
    }

    System::Collections::Generic::List<Facultad^>^
        Simulacro::getFacultades()
    {
        return facultades;
    }

    void Simulacro::setFacultades(
        System::Collections::Generic::List<Facultad^>^ facultades)
    {
        this->facultades = facultades;
    }
}