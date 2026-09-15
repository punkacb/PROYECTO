#pragma once

namespace PROYECTOModel {

    public ref class Mantenimiento
    {
    private:
        System::DateTime fecha;
        System::String^ tipo;
        System::String^ descripcion;
        double costo;

    public:
        Mantenimiento();
        Mantenimiento(System::DateTime fecha, System::String^ tipo,
            System::String^ descripcion, double costo);

        System::DateTime getFecha();
        void setFecha(System::DateTime fecha);

        System::String^ getTipo();
        void setTipo(System::String^ tipo);

        System::String^ getDescripcion();
        void setDescripcion(System::String^ descripcion);

        double getCosto();
        void setCosto(double costo);
    };
}