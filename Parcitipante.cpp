#include "Parcitipante.hpp"

/* ================
 * CLASE BASE/PADRE
 * ================
*/

Participante::Participante(std::string nombre) : nombre(nombre), puntos(0) {}

Participante::~Participante() {}

void Participante::celebrarVictoria() {
    std::cout << nombre << " ha ganado la partida!" << std::endl;
}

std::string Participante::getNombre() const { return nombre; }

int Participante::getPuntos() const { return puntos; }

void Participante::acumularPuntos(int puntos) { this->puntos += puntos; }

/* =============================
 * CLASE HIJA: JugadorIndividual
 * =============================
*/

JugadorIndividual::JugadorIndividual(std::string nombre, std::string dispositivo)
    : Participante(nombre), dispositivo(dispositivo) {}

void JugadorIndividual::mostrarEstadisticas() {
    std::cout << "[Jugador] Nombre: " << nombre;
    std::cout << "| Puntos: " << puntos;
    std::cout << "| Dispositivo: " << dispositivo << std::endl;
}

void JugadorIndividual::celebrarVictoria() {
    std::cout << nombre << " alza sus manos frente a su " << dispositivo << " y gana la partida!" << std::endl;
}

/* ===================
 * CLASE HIJA: Equipo
 * ===================
*/

Equipo::Equipo(std::string nombre, int numDeMiembros) : Participante(nombre), numDeMiembros(numDeMiembros) {}

void Equipo::mostrarEstadisticas() {
    std::cout << "[Equipo] Nombre: " << nombre;
    std::cout << "| Puntos: " << puntos;
    std::cout << "| Miembros: " << numDeMiembros << std::endl;
}

void Equipo::celebrarVictoria() {
    std::cout << "El equipo " << nombre << " ha ganado la partida y celebra en conjunto su victoria!" << std::endl;
}
