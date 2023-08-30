/** @file Cliente.h */
#pragma once
#include <string>

/** @class Cliente
 *  @brief Representa un cliente en el sistema de facturación.
 */
class Cliente {
public:
    Cliente(const std::string& nombre);

    std::string getNombre() const;

private:
    std::string nombre;
};
