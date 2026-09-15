#include "pch.h"
#include "EquipoExtincion.h"

namespace PROYECTOModel {
    EquipoExtincion::EquipoExtincion() : EquipoSeguridad() {
        tipoAgente = "";
    }

    EquipoExtincion::EquipoExtincion(String^ codigo, String^ nombre, String^ estado,
        DateTime fechaAdquisicion, Ambiente^ ambiente, String^ tipoAgente)
        : EquipoSeguridad(codigo, nombre, estado, fechaAdquisicion, ambiente) {
        this->tipoAgente = tipoAgente;
    }

    String^ EquipoExtincion::getTipoAgente() { return tipoAgente; }
    void EquipoExtincion::setTipoAgente(String^ tipoAgente) { this->tipoAgente = tipoAgente; }
}