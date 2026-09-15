#include "pch.h"
#include "Ambiente.h"

namespace PROYECTOModel {
    Ambiente::Ambiente() {
        nombre = "";
        tipo = "";
        capacidad = 0;
        piso = nullptr;
        controlAforo = nullptr;
        activos = gcnew List<Activo^>();
        registrosAcceso = gcnew List<RegistroAcceso^>();
        horarios = gcnew List<Horario^>();
        reservas = gcnew List<ReservaEspacio^>();
        emergencias = gcnew List<Emergencia^>();
        rutasEvacuacion = gcnew List<RutaEvacuacion^>();
    }

    Ambiente::Ambiente(String^ nombre, String^ tipo, int capacidad, Piso^ piso) {
        this->nombre = nombre;
        this->tipo = tipo;
        this->capacidad = capacidad;
        this->piso = piso;
        this->controlAforo = nullptr;
        this->activos = gcnew List<Activo^>();
        this->registrosAcceso = gcnew List<RegistroAcceso^>();
        this->horarios = gcnew List<Horario^>();
        this->reservas = gcnew List<ReservaEspacio^>();
        this->emergencias = gcnew List<Emergencia^>();
        this->rutasEvacuacion = gcnew List<RutaEvacuacion^>();
    }

    String^ Ambiente::getNombre() { return nombre; }
    void Ambiente::setNombre(String^ nombre) { this->nombre = nombre; }

    String^ Ambiente::getTipo() { return tipo; }
    void Ambiente::setTipo(String^ tipo) { this->tipo = tipo; }

    int Ambiente::getCapacidad() { return capacidad; }
    void Ambiente::setCapacidad(int capacidad) { this->capacidad = capacidad; }

    Piso^ Ambiente::getPiso() { return piso; }
    void Ambiente::setPiso(Piso^ piso) { this->piso = piso; }

    ControlAforo^ Ambiente::getControlAforo() { return controlAforo; }
    void Ambiente::setControlAforo(ControlAforo^ controlAforo) { this->controlAforo = controlAforo; }

    List<Activo^>^ Ambiente::getActivos() { return activos; }
    void Ambiente::agregarActivo(Activo^ activo) { activos->Add(activo); }

    List<RegistroAcceso^>^ Ambiente::getRegistrosAcceso() { return registrosAcceso; }
    void Ambiente::agregarRegistroAcceso(RegistroAcceso^ registro) { registrosAcceso->Add(registro); }

    List<Horario^>^ Ambiente::getHorarios() { return horarios; }
    void Ambiente::agregarHorario(Horario^ horario) { horarios->Add(horario); }

    List<ReservaEspacio^>^ Ambiente::getReservas() { return reservas; }
    void Ambiente::agregarReserva(ReservaEspacio^ reserva) { reservas->Add(reserva); }

    List<Emergencia^>^ Ambiente::getEmergencias() { return emergencias; }
    void Ambiente::agregarEmergencia(Emergencia^ emergencia) { emergencias->Add(emergencia); }

    List<RutaEvacuacion^>^ Ambiente::getRutasEvacuacion() { return rutasEvacuacion; }
    void Ambiente::agregarRutaEvacuacion(RutaEvacuacion^ ruta) { rutasEvacuacion->Add(ruta); }
}