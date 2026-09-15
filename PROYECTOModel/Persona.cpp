#include "pch.h"
#include "Persona.h"

namespace PROYECTOModel {
    Persona::Persona() {
        estado = true;
        credencialQR = nullptr;
        registrosAcceso = gcnew List<RegistroAcceso^>();
        incidenciasReportadas = gcnew List<Incidencia^>();
        reservas = gcnew List<ReservaEspacio^>();
        emergenciasReportadas = gcnew List<Emergencia^>();
        notificacionesEnviadas = gcnew List<NotificacionMasiva^>();
        notificacionesRecibidasMasivas = gcnew List<NotificacionMasiva^>();
        notificaciones = gcnew List<Notificacion^>();
    }

    Persona::Persona(String^ id, String^ nombre, String^ apellido, String^ correo,
        String^ contrasena, String^ telefono) {
        this->id = id;
        this->nombre = nombre;
        this->apellido = apellido;
        this->correo = correo;
        this->contrasena = contrasena;
        this->telefono = telefono;
        estado = true;
        credencialQR = nullptr;
        registrosAcceso = gcnew List<RegistroAcceso^>();
        incidenciasReportadas = gcnew List<Incidencia^>();
        reservas = gcnew List<ReservaEspacio^>();
        emergenciasReportadas = gcnew List<Emergencia^>();
        notificacionesEnviadas = gcnew List<NotificacionMasiva^>();
        notificacionesRecibidasMasivas = gcnew List<NotificacionMasiva^>();
        notificaciones = gcnew List<Notificacion^>();
    }

    bool Persona::iniciarSesion(String^ correo, String^ contrasena) {
        return (this->correo == correo && this->contrasena == contrasena);
    }

    void Persona::cerrarSesion() {
    }

    void Persona::recuperarContrasena() {
    }

    String^ Persona::getId() { return id; }
    String^ Persona::getNombre() { return nombre; }
    void Persona::setNombre(String^ nombre) { this->nombre = nombre; }
    String^ Persona::getApellido() { return apellido; }
    void Persona::setApellido(String^ apellido) { this->apellido = apellido; }
    String^ Persona::getCorreo() { return correo; }
    void Persona::setCorreo(String^ correo) { this->correo = correo; }
    String^ Persona::getTelefono() { return telefono; }
    void Persona::setTelefono(String^ telefono) { this->telefono = telefono; }
    bool Persona::getEstado() { return estado; }
    void Persona::setEstado(bool estado) { this->estado = estado; }
    CredencialQR^ Persona::getCredencialQR() { return credencialQR; }
    void Persona::setCredencialQR(CredencialQR^ credencialQR) { this->credencialQR = credencialQR; }

    void Persona::agregarRegistroAcceso(RegistroAcceso^ registro) {
        registrosAcceso->Add(registro);
    }
    void Persona::agregarIncidenciaReportada(Incidencia^ incidencia) {
        incidenciasReportadas->Add(incidencia);
    }
    void Persona::agregarReserva(ReservaEspacio^ reserva) {
        reservas->Add(reserva);
    }
    void Persona::agregarEmergenciaReportada(Emergencia^ emergencia) {
        emergenciasReportadas->Add(emergencia);
    }
    void Persona::agregarNotificacion(Notificacion^ notificacion) {
        notificaciones->Add(notificacion);
    }
}