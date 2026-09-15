#pragma once
#include "Activo.h"

namespace PROYECTOModel {
    using namespace System;

    public ref class EquipoSeguridad : public Activo {
    public:
        EquipoSeguridad();
        EquipoSeguridad(String^ codigo, String^ nombre, String^ estado,
            DateTime fechaAdquisicion, Ambiente^ ambiente);

        virtual void activar();
    };
}