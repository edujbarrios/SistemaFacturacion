/** @file Producto.h */
#pragma once
#include <string>

/** @class Producto
 *  @brief Representa un producto en el sistema de facturación.
 */
class Producto {
public:
    Producto(const std::string& nombre, double precio);

    std::string getNombre() const;
    double getPrecio() const;

private:
    std::string nombre;
    double precio;
};
