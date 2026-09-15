#include "pch.h"
#include "ReporteAnalitica.h"

namespace PROYECTOModel {
ReporteAnalitica::ReporteAnalitica()
{
    tipoReporte = "";
    fechaGeneracion = DateTime::Now;
    filtroFacultad = "";
    filtroFecha = "";
}

ReporteAnalitica::ReporteAnalitica(
    String^ tipoReporte,
    String^ filtroFacultad,
    String^ filtroFecha
)
{
    this->tipoReporte = tipoReporte;
    this->fechaGeneracion = DateTime::Now;
    this->filtroFacultad = filtroFacultad;
    this->filtroFecha = filtroFecha;
}

// ==================== GETTERS ====================

String^ ReporteAnalitica::getTipoReporte()
{
    return tipoReporte;
}

DateTime ReporteAnalitica::getFechaGeneracion()
{
    return fechaGeneracion;
}

String^ ReporteAnalitica::getFiltroFacultad()
{
    return filtroFacultad;
}

String^ ReporteAnalitica::getFiltroFecha()
{
    return filtroFecha;
}

// ==================== SETTERS ====================

void ReporteAnalitica::setTipoReporte(String^ tipoReporte)
{
    this->tipoReporte = tipoReporte;
}

void ReporteAnalitica::setFiltroFacultad(String^ filtroFacultad)
{
    this->filtroFacultad = filtroFacultad;
}

void ReporteAnalitica::setFiltroFecha(String^ filtroFecha)
{
    this->filtroFecha = filtroFecha;
}

// ==================== MÉTODOS ====================

void ReporteAnalitica::generarDashboardUso()
{
    fechaGeneracion = DateTime::Now;
}

void ReporteAnalitica::generarReporteTiemposRespuesta()
{
    fechaGeneracion = DateTime::Now;
}
}
