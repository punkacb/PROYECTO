#pragma once

namespace PROYECTOModel {

    ref class Activo;
    ref class Persona;
    ref class Administrador;
    ref class Notificacion;

    public ref class Incidencia
    {
    private:
        System::DateTime fecha;
        System::String^ descripcion;
        System::String^ estado;
        System::String^ prioridad;

        Activo^ activo;
        Persona^ reportante;
        Administrador^ tecnicoAsignado;
        System::Collections::Generic::List<Notificacion^>^ notificaciones;

    public:
        Incidencia();

        Incidencia(System::DateTime fecha,
            System::String^ descripcion,
            System::String^ estado,
            System::String^ prioridad);

        System::DateTime getFecha();
        void setFecha(System::DateTime fecha);

        System::String^ getDescripcion();
        void setDescripcion(System::String^ descripcion);

        System::String^ getEstado();
        void setEstado(System::String^ estado);

        System::String^ getPrioridad();
        void setPrioridad(System::String^ prioridad);

        Activo^ getActivo();
        void setActivo(Activo^ activo);

        Persona^ getReportante();
        void setReportante(Persona^ reportante);

        Administrador^ getTecnicoAsignado();
        void setTecnicoAsignado(Administrador^ tecnicoAsignado);

        System::Collections::Generic::List<Notificacion^>^ getNotificaciones();
        void setNotificaciones(System::Collections::Generic::List<Notificacion^>^ notificaciones);
    };
}