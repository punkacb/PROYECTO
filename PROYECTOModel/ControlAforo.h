#pragma once

using namespace System;

namespace PROYECTOModel {

ref class Ambiente;

public ref class ControlAforo
{
private:
    int capacidadMaxima;
    int ocupacionActual;
    double porcentajeAlerta;

    Ambiente^ ambiente;

public:
    ControlAforo();
    ControlAforo(int capacidadMaxima, double porcentajeAlerta);

    // Getters
    int getCapacidadMaxima();
    int getOcupacionActual();
    double getPorcentajeAlerta();
    Ambiente^ getAmbiente();

    // Setters
    void setCapacidadMaxima(int capacidadMaxima);
    void setOcupacionActual(int ocupacionActual);
    void setPorcentajeAlerta(double porcentajeAlerta);
    void setAmbiente(Ambiente^ ambiente);

    // Métodos principales
    bool verificarAforo();
    bool incrementar();
    bool decrementar();
};

}
