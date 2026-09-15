#pragma once

namespace PROYECTOModel {
    using namespace System;
    using namespace System::Collections::Generic;

    ref class Piso;
    ref class Simulacro;

    public ref class Facultad {
    private:
        String^ nombre;
        String^ ubicacion;
        List<Piso^>^ pisos;
        List<Simulacro^>^ simulacros;

    public:
        Facultad();
        Facultad(String^ nombre, String^ ubicacion);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);

        List<Piso^>^ getPisos();
        List<Simulacro^>^ getSimulacros();

        void agregarPiso(Piso^ piso);
        void agregarSimulacro(Simulacro^ simulacro);
    };
}