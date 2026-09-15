#pragma once

namespace PROYECTOModel {

    ref class Ambiente;

    public ref class RutaEvacuacion
    {
    private:
        System::String^ tipoSiniestro;
        System::String^ descripcionRuta;

        System::Collections::Generic::List<Ambiente^>^ ambientes;

    public:
        RutaEvacuacion();

        RutaEvacuacion(
            System::String^ tipoSiniestro,
            System::String^ descripcionRuta);

        System::String^ getTipoSiniestro();
        void setTipoSiniestro(System::String^ tipoSiniestro);

        System::String^ getDescripcionRuta();
        void setDescripcionRuta(System::String^ descripcionRuta);

        System::Collections::Generic::List<Ambiente^>^ getAmbientes();
        void setAmbientes(
            System::Collections::Generic::List<Ambiente^>^ ambientes);
    };
}