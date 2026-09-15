#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {
    ref class CredencialQR;
    ref class RegistroAcceso;
    ref class Incidencia;
    ref class ReservaEspacio;
    ref class Emergencia;
    ref class NotificacionMasiva;
    ref class Notificacion;

    public ref class Persona abstract
    {
    protected:
        String^ id;
        String^ nombre;
        String^ apellido;
        String^ correo;
        String^ contrasena;
        String^ telefono;
        bool estado;

        CredencialQR^ credencialQR;
        List<RegistroAcceso^>^ registrosAcceso;
        List<Incidencia^>^ incidenciasReportadas;
        List<ReservaEspacio^>^ reservas;
        List<Emergencia^>^ emergenciasReportadas;
        List<NotificacionMasiva^>^ notificacionesEnviadas;
        List<NotificacionMasiva^>^ notificacionesRecibidasMasivas;
        List<Notificacion^>^ notificaciones;

        Persona();
        Persona(String^ id, String^ nombre, String^ apellido, String^ correo,
            String^ contrasena, String^ telefono);

    public:
        virtual bool iniciarSesion(String^ correo, String^ contrasena);
        virtual void cerrarSesion();
        virtual void recuperarContrasena();

        String^ getId();
        String^ getNombre();
        void setNombre(String^ nombre);
        String^ getApellido();
        void setApellido(String^ apellido);
        String^ getCorreo();
        void setCorreo(String^ correo);
        String^ getTelefono();
        void setTelefono(String^ telefono);
        bool getEstado();
        void setEstado(bool estado);
        CredencialQR^ getCredencialQR();
        void setCredencialQR(CredencialQR^ credencialQR);

        void agregarRegistroAcceso(RegistroAcceso^ registro);
        void agregarIncidenciaReportada(Incidencia^ incidencia);
        void agregarReserva(ReservaEspacio^ reserva);
        void agregarEmergenciaReportada(Emergencia^ emergencia);
        void agregarNotificacion(Notificacion^ notificacion);
    };
}