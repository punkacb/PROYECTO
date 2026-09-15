#pragma once

using namespace System;

namespace PROYECTOModel {

ref class Persona;
ref class Incidencia;

public ref class Notificacion
{
private:
    String^ mensaje;
    String^ canal;
    bool leido;

    Persona^ persona;
    Incidencia^ incidencia;

public:
    Notificacion();

    Notificacion(
        String^ mensaje,
        String^ canal,
        Persona^ persona,
        Incidencia^ incidencia
    );

    // Getters
    String^ getMensaje();
    String^ getCanal();
    bool getLeido();
    Persona^ getPersona();
    Incidencia^ getIncidencia();

    // Setters
    void setMensaje(String^ mensaje);
    void setCanal(String^ canal);
    void setLeido(bool leido);
    void setPersona(Persona^ persona);
    void setIncidencia(Incidencia^ incidencia);
};

}
