#include "pch.h"
#include "RegistroAcceso.h"
#include "ControlAforo.h"

namespace PROYECTOModel {
    RegistroAcceso::RegistroAcceso() {
        fechaHora = DateTime::MinValue;
        tipoMovimiento = "";
        resultado = "";
        persona = nullptr;
        ambiente = nullptr;
        credencialQR = nullptr;
    }

    RegistroAcceso::RegistroAcceso(Persona^ persona, Ambiente^ ambiente, CredencialQR^ credencialQR,
        String^ tipoMovimiento) {
        this->persona = persona;
        this->ambiente = ambiente;
        this->credencialQR = credencialQR;
        this->tipoMovimiento = tipoMovimiento;
        this->fechaHora = DateTime::Now;
        this->resultado = "";
    }

    DateTime RegistroAcceso::getFechaHora() { return fechaHora; }
    void RegistroAcceso::setFechaHora(DateTime fechaHora) { this->fechaHora = fechaHora; }

    String^ RegistroAcceso::getTipoMovimiento() { return tipoMovimiento; }
    void RegistroAcceso::setTipoMovimiento(String^ tipoMovimiento) { this->tipoMovimiento = tipoMovimiento; }

    String^ RegistroAcceso::getResultado() { return resultado; }
    void RegistroAcceso::setResultado(String^ resultado) { this->resultado = resultado; }

    Persona^ RegistroAcceso::getPersona() { return persona; }
    void RegistroAcceso::setPersona(Persona^ persona) { this->persona = persona; }

    Ambiente^ RegistroAcceso::getAmbiente() { return ambiente; }
    void RegistroAcceso::setAmbiente(Ambiente^ ambiente) { this->ambiente = ambiente; }

    CredencialQR^ RegistroAcceso::getCredencialQR() { return credencialQR; }
    void RegistroAcceso::setCredencialQR(CredencialQR^ credencialQR) { this->credencialQR = credencialQR; }

    void RegistroAcceso::registrarIngreso(ControlAforo^ controlAforo) {
        fechaHora = DateTime::Now;
        tipoMovimiento = "Ingreso";

        if (controlAforo != nullptr && controlAforo->incrementar()) {
            resultado = "Permitido";
        }
        else {
            resultado = "Denegado";
        }
    }

    void RegistroAcceso::registrarSalida(ControlAforo^ controlAforo) {
        fechaHora = DateTime::Now;
        tipoMovimiento = "Salida";

        if (controlAforo != nullptr && controlAforo->decrementar()) {
            resultado = "Permitido";
        }
        else {
            resultado = "Denegado";
        }
    }
}