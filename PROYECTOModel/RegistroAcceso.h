#pragma once
#include "Persona.h"
#include "CredencialQR.h"

namespace PROYECTOModel {
    using namespace System;

    ref class Ambiente;
    ref class ControlAforo;

    public ref class RegistroAcceso {
    private:
        DateTime fechaHora;
        String^ tipoMovimiento;
        String^ resultado;
        Persona^ persona;
        Ambiente^ ambiente;
        CredencialQR^ credencialQR;

    public:
        RegistroAcceso();
        RegistroAcceso(Persona^ persona, Ambiente^ ambiente, CredencialQR^ credencialQR,
            String^ tipoMovimiento);

        DateTime getFechaHora();
        void setFechaHora(DateTime fechaHora);

        String^ getTipoMovimiento();
        void setTipoMovimiento(String^ tipoMovimiento);

        String^ getResultado();
        void setResultado(String^ resultado);

        Persona^ getPersona();
        void setPersona(Persona^ persona);

        Ambiente^ getAmbiente();
        void setAmbiente(Ambiente^ ambiente);

        CredencialQR^ getCredencialQR();
        void setCredencialQR(CredencialQR^ credencialQR);

        void registrarIngreso(ControlAforo^ controlAforo);
        void registrarSalida(ControlAforo^ controlAforo);
    };
}