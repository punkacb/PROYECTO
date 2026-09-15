#pragma once

namespace PROYECTOModel {
    using namespace System;
    using namespace System::Collections::Generic;

    ref class Facultad;
    ref class Ambiente;

    public ref class Piso {
    private:
        int numero;
        String^ descripcion;
        Facultad^ facultad;
        List<Ambiente^>^ ambientes;

    public:
        Piso();
        Piso(int numero, String^ descripcion, Facultad^ facultad);

        int getNumero();
        void setNumero(int numero);

        String^ getDescripcion();
        void setDescripcion(String^ descripcion);

        Facultad^ getFacultad();
        void setFacultad(Facultad^ facultad);

        List<Ambiente^>^ getAmbientes();
        void agregarAmbiente(Ambiente^ ambiente);
    };
}