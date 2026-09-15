#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {
    ref class Permiso;

    public ref class Rol
    {
    private:
        String^ idRol;
        String^ nombre;

        List<Permiso^>^ permisos;

    public:
        Rol();
        Rol(String^ idRol, String^ nombre);

        String^ getIdRol();
        void setIdRol(String^ idRol);
        String^ getNombre();
        void setNombre(String^ nombre);

        void agregarPermiso(Permiso^ permiso);
    };
}