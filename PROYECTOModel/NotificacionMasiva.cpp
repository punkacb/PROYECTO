#include "pch.h"
#include "NotificacionMasiva.h"

#include "Persona.h"

namespace PROYECTOModel {

NotificacionMasiva::NotificacionMasiva()
{
    mensaje = "";
    fechaEnvio = DateTime::Now;
    canal = "";
    alcance = "";
    emisor = nullptr;
    destinatarios = gcnew List<Persona^>();
}

NotificacionMasiva::NotificacionMasiva(
    String^ mensaje,
    String^ canal,
    String^ alcance,
    Persona^ emisor
)
{
    this->mensaje = mensaje;
    this->fechaEnvio = DateTime::Now;
    this->canal = canal;
    this->alcance = alcance;
    this->emisor = emisor;
    this->destinatarios = gcnew List<Persona^>();
}


String^ NotificacionMasiva::getMensaje()
{
    return mensaje;
}

DateTime NotificacionMasiva::getFechaEnvio()
{
    return fechaEnvio;
}

String^ NotificacionMasiva::getCanal()
{
    return canal;
}

String^ NotificacionMasiva::getAlcance()
{
    return alcance;
}

Persona^ NotificacionMasiva::getEmisor()
{
    return emisor;
}

List<Persona^>^ NotificacionMasiva::getDestinatarios()
{
    return destinatarios;
}


void NotificacionMasiva::setMensaje(String^ mensaje)
{
    this->mensaje = mensaje;
}

void NotificacionMasiva::setCanal(String^ canal)
{
    this->canal = canal;
}

void NotificacionMasiva::setAlcance(String^ alcance)
{
    this->alcance = alcance;
}

void NotificacionMasiva::setEmisor(Persona^ emisor)
{
    this->emisor = emisor;
}
}
