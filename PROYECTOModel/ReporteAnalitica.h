#pragma once

using namespace System;

namespace PROYECTOModel {

public ref class ReporteAnalitica
{
private:
    String^ tipoReporte;
    DateTime fechaGeneracion;
    String^ filtroFacultad;
    String^ filtroFecha;

public:
    ReporteAnalitica();
    ReporteAnalitica(
        String^ tipoReporte,
        String^ filtroFacultad,
        String^ filtroFecha
    );

    // Getters
    String^ getTipoReporte();
    DateTime getFechaGeneracion();
    String^ getFiltroFacultad();
    String^ getFiltroFecha();

    // Setters
    void setTipoReporte(String^ tipoReporte);
    void setFiltroFacultad(String^ filtroFacultad);
    void setFiltroFecha(String^ filtroFecha);

    // Métodos
    void generarDashboardUso();
    void generarReporteTiemposRespuesta();
};

}
