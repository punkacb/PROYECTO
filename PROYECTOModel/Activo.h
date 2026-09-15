#pragma once

namespace PROYECTOModel {
    using namespace System;
    using namespace System::Collections::Generic;

    ref class Ambiente;
    ref class Mantenimiento;
    ref class Incidencia;

    public ref class Activo {
    protected:
        String^ codigo;
        String^ nombre;
        String^ estado;
        DateTime fechaAdquisicion;
        Ambiente^ ambiente;
        List<Mantenimiento^>^ mantenimientos;
        List<Incidencia^>^ incidencias;

    public:
        Activo();
        Activo(String^ codigo, String^ nombre, String^ estado,
            DateTime fechaAdquisicion, Ambiente^ ambiente);

        String^ getCodigo();
        void setCodigo(String^ codigo);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getEstado();
        void setEstado(String^ estado);

        DateTime getFechaAdquisicion();
        void setFechaAdquisicion(DateTime fechaAdquisicion);

        Ambiente^ getAmbiente();
        void setAmbiente(Ambiente^ ambiente);

        List<Mantenimiento^>^ getMantenimientos();
        void agregarMantenimiento(Mantenimiento^ mantenimiento);

        List<Incidencia^>^ getIncidencias();
        void agregarIncidencia(Incidencia^ incidencia);
    };
}