#include "pch.h"
#include "EquipoSeguridad.h"

namespace PROYECTOModel {
    EquipoSeguridad::EquipoSeguridad() : Activo() {
    }

    EquipoSeguridad::EquipoSeguridad(String^ codigo, String^ nombre, String^ estado,
        DateTime fechaAdquisicion, Ambiente^ ambiente)
        : Activo(codigo, nombre, estado, fechaAdquisicion, ambiente) {
    }

    void EquipoSeguridad::activar() {
        estado = "Activo";
    }
}