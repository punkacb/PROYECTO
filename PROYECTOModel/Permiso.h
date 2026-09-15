#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace PROYECTOModel {
    ref class Rol;

    public ref class Permiso
    {
    private:
        String^ idPermiso;
        String^ nombre;
        String^ descripcion;

        List<Rol^>^ roles;

    public:
        Permiso();
        Permiso(String^ idPermiso, String^ nombre, String^ descripcion);

        String^ getIdPermiso();
        void setIdPermiso(String^ idPermiso);
        String^ getNombre();
        void setNombre(String^ nombre);
        String^ getDescripcion();
        void setDescripcion(String^ descripcion);

        void agregarRol(Rol^ rol);
    };
}