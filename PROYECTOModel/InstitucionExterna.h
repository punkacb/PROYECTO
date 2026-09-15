#pragma once

namespace PROYECTOModel {

    ref class Emergencia;

    public ref class InstitucionExterna
    {
    private:
        System::String^ nombre;
        System::String^ tipo;
        System::String^ telefono;

        System::Collections::Generic::List<Emergencia^>^ emergencias;

    public:
        InstitucionExterna();

        InstitucionExterna(
            System::String^ nombre,
            System::String^ tipo,
            System::String^ telefono);

        void contactar();
        void enviarDatosAPI();

        System::String^ getNombre();
        void setNombre(System::String^ nombre);

        System::String^ getTipo();
        void setTipo(System::String^ tipo);

        System::String^ getTelefono();
        void setTelefono(System::String^ telefono);

        System::Collections::Generic::List<Emergencia^>^ getEmergencias();
        void setEmergencias(
            System::Collections::Generic::List<Emergencia^>^ emergencias);
    };
}