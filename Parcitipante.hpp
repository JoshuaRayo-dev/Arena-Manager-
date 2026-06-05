#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H
#include <iostream>
#include <string>

class Participante {
    protected:
        std::string nombre;
        int puntos;

    public:
        Participante(std::string nombre);
        virtual ~Participante();

        // Métodos virtuales
        virtual void mostrarEstadisticas() = 0;
        virtual void celebrarVictoria();

        // Modificadores y Getters
        std::string getNombre() const;
        int getPuntos() const;
        void acumularPuntos(int puntos);
};

class JugadorIndividual : public Participante {
    private:
        std::string dispositivo;

    public:
        JugadorIndividual(std::string nombre, std::string dispositivo);

        // Métodos específicos de JugadorIndividual
        void mostrarEstadisticas() override;
        void celebrarVictoria() override;
};

class Equipo : public Participante {
    private:
        int numDeMiembros;
    
    public:
        Equipo(std::string nombre, int numDeMiembros);

        // Métodos específicos de Equipo
        void mostrarEstadisticas() override;
        void celebrarVictoria() override;

};

#endif