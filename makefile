# Especifica el compilador
CXX = g++-13

# Opciones de compilación
CXXFLAGS = -std=c++11 -Wall

# Directorios de inclusión
INCLUDES = -I.

# Lista de archivos fuente
SRCS = main.cpp Sistema/Sys.cpp Classes/Event.cpp Classes/Asistente.cpp \
	Classes/Concert.cpp Classes/Conference.cpp Classes/Seminario.cpp \
	Classes/Taller.cpp Classes/Student.cpp Classes/Professional.cpp Classes/SpecialInvit.cpp \
       	Classes/AsistenteFactory.cpp Classes/EventFactory.cpp

# Lista de objetos a generar
OBJS = $(SRCS:.cpp=.o)

# Nombre del ejecutable
EXEC = programa

# Regla para generar el ejecutable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(EXEC) $(OBJS)

# Regla para compilar cada archivo fuente
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Eliminar archivos objeto y ejecutable
clean:
	$(RM) $(OBJS) $(EXEC)

