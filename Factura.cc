/** @file Factura.cc */
#include "Factura.h"

Factura::Factura(Cliente cliente) : cliente(cliente) {}

void Factura::agregarProducto(Producto producto) {
    productos.push_back(producto);
}

void Factura::eliminarProducto(int index) {
    if (index >= 0 && index < productos.size()) {
        productos.erase(productos.begin() + index);
    }
}

double Factura::calcularTotal() const {
    double total = 0;
    for (const auto& producto : productos) {
        total += producto.getPrecio();
    }
    return total;
}
