#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {

ref class Persona;

public ref class NotificacionMasiva
{
private:
    String^ mensaje;
    DateTime fechaEnvio;
    String^ canal;
    String^ alcance;

    Persona^ emisor;
    List<Persona^>^ destinatarios;

public:
    NotificacionMasiva();

    NotificacionMasiva(
        String^ mensaje,
        String^ canal,
        String^ alcance,
        Persona^ emisor
    );

    // Getters
    String^ getMensaje();
    DateTime getFechaEnvio();
    String^ getCanal();
    String^ getAlcance();
    Persona^ getEmisor();
    List<Persona^>^ getDestinatarios();

    // Setters
    void setMensaje(String^ mensaje);
    void setCanal(String^ canal);
    void setAlcance(String^ alcance);
    void setEmisor(Persona^ emisor);
};

}
