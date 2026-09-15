#include "pch.h"
#include "CredencialQR.h"

namespace PROYECTOModel {
    CredencialQR::CredencialQR() {
        codigo = "";
        fechaGeneracion = DateTime::MinValue;
        fechaExpiracion = DateTime::MinValue;
        vigente = false;
        sincronizado = false;
        persona = nullptr;
    }

    CredencialQR::CredencialQR(String^ codigo, Persona^ persona) {
        this->codigo = codigo;
        this->persona = persona;
        this->sincronizado = false;
        generar();
    }

    String^ CredencialQR::getCodigo() { return codigo; }
    void CredencialQR::setCodigo(String^ codigo) { this->codigo = codigo; }

    DateTime CredencialQR::getFechaGeneracion() { return fechaGeneracion; }
    void CredencialQR::setFechaGeneracion(DateTime fechaGeneracion) { this->fechaGeneracion = fechaGeneracion; }

    DateTime CredencialQR::getFechaExpiracion() { return fechaExpiracion; }
    void CredencialQR::setFechaExpiracion(DateTime fechaExpiracion) { this->fechaExpiracion = fechaExpiracion; }

    bool CredencialQR::getVigente() { return vigente; }
    void CredencialQR::setVigente(bool vigente) { this->vigente = vigente; }

    bool CredencialQR::getSincronizado() { return sincronizado; }
    void CredencialQR::setSincronizado(bool sincronizado) { this->sincronizado = sincronizado; }

    Persona^ CredencialQR::getPersona() { return persona; }
    void CredencialQR::setPersona(Persona^ persona) { this->persona = persona; }

    void CredencialQR::generar() {
        fechaGeneracion = DateTime::Now;
        fechaExpiracion = fechaGeneracion.AddSeconds(30);
        vigente = true;
    }

    bool CredencialQR::validar() {
        vigente = (DateTime::Now <= fechaExpiracion);
        return vigente;
    }

    void CredencialQR::refrescar() {
        generar();
    }
}