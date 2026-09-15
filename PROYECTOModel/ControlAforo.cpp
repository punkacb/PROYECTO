#include "pch.h"
#include "ControlAforo.h"

#include "Ambiente.h"

namespace PROYECTOModel {

ControlAforo::ControlAforo()
{
    capacidadMaxima = 0;
    ocupacionActual = 0;
    porcentajeAlerta = 90.0;
    ambiente = nullptr;
}

ControlAforo::ControlAforo(int capacidadMaxima, double porcentajeAlerta)
{
    this->capacidadMaxima = capacidadMaxima;
    this->ocupacionActual = 0;
    this->porcentajeAlerta = porcentajeAlerta;
    this->ambiente = nullptr;
}

// ==================== GETTERS ====================

int ControlAforo::getCapacidadMaxima()
{
    return capacidadMaxima;
}

int ControlAforo::getOcupacionActual()
{
    return ocupacionActual;
}

double ControlAforo::getPorcentajeAlerta()
{
    return porcentajeAlerta;
}

Ambiente^ ControlAforo::getAmbiente()
{
    return ambiente;
}

// ==================== SETTERS ====================

void ControlAforo::setCapacidadMaxima(int capacidadMaxima)
{
    if (capacidadMaxima >= 0)
    {
        this->capacidadMaxima = capacidadMaxima;

        // Evita que la ocupación quede por encima de la nueva capacidad
        if (ocupacionActual > this->capacidadMaxima)
        {
            ocupacionActual = this->capacidadMaxima;
        }
    }
}

void ControlAforo::setOcupacionActual(int ocupacionActual)
{
    if (ocupacionActual >= 0 && ocupacionActual <= capacidadMaxima)
    {
        this->ocupacionActual = ocupacionActual;
    }
}

void ControlAforo::setPorcentajeAlerta(double porcentajeAlerta)
{
    if (porcentajeAlerta >= 0 && porcentajeAlerta <= 100)
    {
        this->porcentajeAlerta = porcentajeAlerta;
    }
}

void ControlAforo::setAmbiente(Ambiente^ ambiente)
{
    this->ambiente = ambiente;
}

// ==================== MÉTODOS ====================

bool ControlAforo::verificarAforo()
{
    if (capacidadMaxima <= 0)
    {
        return false;
    }

    double porcentajeOcupacion =
        ((double)ocupacionActual / capacidadMaxima) * 100.0;

    return porcentajeOcupacion >= porcentajeAlerta;
}

bool ControlAforo::incrementar()
{
    // No permite superar la capacidad máxima
    if (ocupacionActual >= capacidadMaxima)
    {
        return false;
    }

    ocupacionActual++;

    // Se incrementó correctamente.
    // verificarAforo() puede utilizarse para saber si llegó a la alerta.
    return true;
}

bool ControlAforo::decrementar()
{
    // No permite que la ocupación sea negativa
    if (ocupacionActual <= 0)
    {
        return false;
    }

    ocupacionActual--;

    return true;
}
}
