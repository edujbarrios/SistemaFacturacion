/** @file Factura.h */
#pragma once
#include "Cliente.h"
#include "Producto.h"
#include <vector>

/** @class Factura
 *  @brief Representa una factura en el sistema de facturación.
 */
class Factura {
public:
    Factura(Cliente cliente);

    void agregarProducto(Producto producto);
    void eliminarProducto(int index);
    double calcularTotal() const;

private:
    Cliente cliente;
    std::vector<Producto> productos;
};
