#pragma once
#include "EquipoSeguridad.h"

namespace PROYECTOModel {
    using namespace System;
    using namespace System::Collections::Generic;

    ref class Emergencia;

    public ref class Sensor : public EquipoSeguridad {
    private:
        String^ tipoSensor;
        double umbral;
        List<Emergencia^>^ emergencias;

    public:
        Sensor();
        Sensor(String^ codigo, String^ nombre, String^ estado,
            DateTime fechaAdquisicion, Ambiente^ ambiente,
            String^ tipoSensor, double umbral);

        String^ getTipoSensor();
        void setTipoSensor(String^ tipoSensor);

        double getUmbral();
        void setUmbral(double umbral);

        List<Emergencia^>^ getEmergencias();
        void agregarEmergencia(Emergencia^ emergencia);

        double leerValor();
    };
}