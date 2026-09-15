#include "pch.h"
#include "Notificacion.h"

#include "Persona.h"

#include "Incidencia.h"

namespace PROYECTOModel {

Notificacion::Notificacion()
{
    mensaje = "";
    canal = "";
    leido = false;
    persona = nullptr;
    incidencia = nullptr;
}

Notificacion::Notificacion(
    String^ mensaje,
    String^ canal,
    Persona^ persona,
    Incidencia^ incidencia
)
{
    this->mensaje = mensaje;
    this->canal = canal;
    this->leido = false;
    this->persona = persona;
    this->incidencia = incidencia;
}


String^ Notificacion::getMensaje()
{
    return mensaje;
}

String^ Notificacion::getCanal()
{
    return canal;
}

bool Notificacion::getLeido()
{
    return leido;
}

Persona^ Notificacion::getPersona()
{
    return persona;
}

Incidencia^ Notificacion::getIncidencia()
{
    return incidencia;
}



void Notificacion::setMensaje(String^ mensaje)
{
    this->mensaje = mensaje;
}

void Notificacion::setCanal(String^ canal)
{
    this->canal = canal;
}

void Notificacion::setLeido(bool leido)
{
    this->leido = leido;
}

void Notificacion::setPersona(Persona^ persona)
{
    this->persona = persona;
}

void Notificacion::setIncidencia(Incidencia^ incidencia)
{
    this->incidencia = incidencia;
}
}
