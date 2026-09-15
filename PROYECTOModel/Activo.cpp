#include "pch.h"
#include "Activo.h"

namespace PROYECTOModel {
    Activo::Activo() {
        codigo = "";
        nombre = "";
        estado = "";
        fechaAdquisicion = DateTime::MinValue;
        ambiente = nullptr;
        mantenimientos = gcnew List<Mantenimiento^>();
        incidencias = gcnew List<Incidencia^>();
    }

    Activo::Activo(String^ codigo, String^ nombre, String^ estado,
        DateTime fechaAdquisicion, Ambiente^ ambiente) {
        this->codigo = codigo;
        this->nombre = nombre;
        this->estado = estado;
        this->fechaAdquisicion = fechaAdquisicion;
        this->ambiente = ambiente;
        this->mantenimientos = gcnew List<Mantenimiento^>();
        this->incidencias = gcnew List<Incidencia^>();
    }

    String^ Activo::getCodigo() { return codigo; }
    void Activo::setCodigo(String^ codigo) { this->codigo = codigo; }

    String^ Activo::getNombre() { return nombre; }
    void Activo::setNombre(String^ nombre) { this->nombre = nombre; }

    String^ Activo::getEstado() { return estado; }
    void Activo::setEstado(String^ estado) { this->estado = estado; }

    DateTime Activo::getFechaAdquisicion() { return fechaAdquisicion; }
    void Activo::setFechaAdquisicion(DateTime fechaAdquisicion) { this->fechaAdquisicion = fechaAdquisicion; }

    Ambiente^ Activo::getAmbiente() { return ambiente; }
    void Activo::setAmbiente(Ambiente^ ambiente) { this->ambiente = ambiente; }

    List<Mantenimiento^>^ Activo::getMantenimientos() { return mantenimientos; }
    void Activo::agregarMantenimiento(Mantenimiento^ mantenimiento) {
        mantenimientos->Add(mantenimiento);
    }

    List<Incidencia^>^ Activo::getIncidencias() { return incidencias; }
    void Activo::agregarIncidencia(Incidencia^ incidencia) {
        incidencias->Add(incidencia);
    }
}