# Makefile para sistema de facturación en C++

# Opciones de compilador
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Archivos fuente y objeto
SRC = main.cc Producto.cc Cliente.cc Factura.cc
OBJ = $(SRC:.cc=.o)

# Nombre del ejecutable
EXEC = sistema_facturacion

# Regla 'all' (la primera regla es la que se ejecuta si no se especifica ninguna)
all: $(EXEC)

# Regla para el ejecutable
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla general para archivos objeto
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla 'clean' para eliminar archivos generados
clean:
	rm -f $(OBJ) $(EXEC)
