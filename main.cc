/** @file main.cc */
#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Producto.h"
#include "Factura.h"

int main() {
    std::vector<Cliente> listaClientes;
    std::vector<Producto> listaProductos;
    std::vector<Factura> listaFacturas;

    int opcion = 0;

    while (true) {
        std::cout << "------- Menú -------\n";
        std::cout << "1. Añadir Cliente\n";
        std::cout << "2. Listar Clientes\n";
        std::cout << "3. Añadir Producto\n";
        std::cout << "4. Listar Productos\n";
        std::cout << "5. Crear Factura\n";
        std::cout << "6. Salir\n";
        std::cout << "--------------------\n";
        std::cout << "Elija una opción: ";
        std::cin >> opcion;

        if (opcion == 1) {
            std::string nombre;
            std::cout << "Ingrese el nombre del cliente: ";
            std::cin >> nombre;
            Cliente nuevoCliente(nombre);
            listaClientes.push_back(nuevoCliente);
        } else if (opcion == 2) {
            std::cout << "Lista de Clientes:\n";
            for (const auto& cliente : listaClientes) {
                std::cout << "- " << cliente.getNombre() << "\n";
            }
        } else if (opcion == 3) {
            std::string nombre;
            double precio;
            std::cout << "Ingrese el nombre del producto: ";
            std::cin >> nombre;
            std::cout << "Ingrese el precio del producto: ";
            std::cin >> precio;
            Producto nuevoProducto(nombre, precio);
            listaProductos.push_back(nuevoProducto);
        } else if (opcion == 4) {
            std::cout << "Lista de Productos:\n";
            for (const auto& producto : listaProductos) {
                std::cout << "- " << producto.getNombre() << ", $" << producto.getPrecio() << "\n";
            }
        } else if (opcion == 5) {
            // Implementar lógica de factura
            std::cout << "Funcionalidad de facturación aún no implementada.\n";
        } else if (opcion == 6) {
            break;
        } else {
            std::cout << "Opción no válida.\n";
        }
    }
    return 0;
}
