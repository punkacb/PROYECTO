#pragma once

namespace PROYECTOModel {

    ref class Facultad;

    public ref class Simulacro
    {
    private:
        System::DateTime fechaHora;
        System::String^ tipoSiniestro;
        double tiempoEvacuacion;
        int numeroParticipantes;

        System::Collections::Generic::List<Facultad^>^ facultades;

    public:
        Simulacro();

        Simulacro(
            System::DateTime fechaHora,
            System::String^ tipoSiniestro,
            double tiempoEvacuacion,
            int numeroParticipantes);

        System::DateTime getFechaHora();
        void setFechaHora(System::DateTime fechaHora);

        System::String^ getTipoSiniestro();
        void setTipoSiniestro(System::String^ tipoSiniestro);

        double getTiempoEvacuacion();
        void setTiempoEvacuacion(double tiempoEvacuacion);

        int getNumeroParticipantes();
        void setNumeroParticipantes(int numeroParticipantes);

        System::Collections::Generic::List<Facultad^>^ getFacultades();
        void setFacultades(
            System::Collections::Generic::List<Facultad^>^ facultades);
    };
}

