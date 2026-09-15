#pragma once
#include "Persona.h"

namespace PROYECTOModel {
    using namespace System;

    public ref class CredencialQR {
    private:
        String^ codigo;
        DateTime fechaGeneracion;
        DateTime fechaExpiracion;
        bool vigente;
        bool sincronizado;
        Persona^ persona;

    public:
        CredencialQR();
        CredencialQR(String^ codigo, Persona^ persona);

        // Getters y Setters
        String^ getCodigo();
        void setCodigo(String^ codigo);

        DateTime getFechaGeneracion();
        void setFechaGeneracion(DateTime fechaGeneracion);

        DateTime getFechaExpiracion();
        void setFechaExpiracion(DateTime fechaExpiracion);

        bool getVigente();
        void setVigente(bool vigente);

        bool getSincronizado();
        void setSincronizado(bool sincronizado);

        Persona^ getPersona();
        void setPersona(Persona^ persona);

        // Métodos
        void generar();
        bool validar();
        void refrescar();
    };
}