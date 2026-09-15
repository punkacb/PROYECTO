#pragma once
#include "EquipoSeguridad.h"

namespace PROYECTOModel {
    using namespace System;

    public ref class EquipoExtincion : public EquipoSeguridad {
    private:
        String^ tipoAgente;

    public:
        EquipoExtincion();
        EquipoExtincion(String^ codigo, String^ nombre, String^ estado,
            DateTime fechaAdquisicion, Ambiente^ ambiente, String^ tipoAgente);

        String^ getTipoAgente();
        void setTipoAgente(String^ tipoAgente);
    };
}