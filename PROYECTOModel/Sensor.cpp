#include "pch.h"
#include "Sensor.h"

namespace PROYECTOModel {
    Sensor::Sensor() : EquipoSeguridad() {
        tipoSensor = "";
        umbral = 0.0;
        emergencias = gcnew List<Emergencia^>();
    }

    Sensor::Sensor(String^ codigo, String^ nombre, String^ estado,
        DateTime fechaAdquisicion, Ambiente^ ambiente,
        String^ tipoSensor, double umbral)
        : EquipoSeguridad(codigo, nombre, estado, fechaAdquisicion, ambiente) {
        this->tipoSensor = tipoSensor;
        this->umbral = umbral;
        emergencias = gcnew List<Emergencia^>();
    }

    String^ Sensor::getTipoSensor() { return tipoSensor; }
    void Sensor::setTipoSensor(String^ tipoSensor) { this->tipoSensor = tipoSensor; }

    double Sensor::getUmbral() { return umbral; }
    void Sensor::setUmbral(double umbral) { this->umbral = umbral; }

    List<Emergencia^>^ Sensor::getEmergencias() { return emergencias; }
    void Sensor::agregarEmergencia(Emergencia^ emergencia) {
        emergencias->Add(emergencia);
    }

    double Sensor::leerValor() {
        return 0.0;
    }
}