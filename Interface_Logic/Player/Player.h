//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_PLAYER_H
#define PROYECTO_1_CLIENT_PLAYER_H


#include "../../Structures/WordsList.h"

class Player {
    private:
        string* name;
        int* ID;
        int* points;
        WordsList* chips;
        bool* turn;
    public:
        Player();
        /**
        * Constructor de la clase Player.
        * @param name Nombre del jugador de tipo string
        */
        Player(string name);
        /**
         * Metodo para obtener los puntos acumulados por el jugador.
         * @return Puntaje de tipo entero.
         */
        int* getPoints();
        /**
         * Metodo para obtner la lista de fichas que tiene un jugador.
         * @return Fichas de tipo LinkedList.
         */
        WordsList* getChips();
        /**
         * Metodo para obtener el nombre del jugador.
         * @return Nombre de tipo string.
         */
        string* getName();
        /**
         * Metodo para cambiar el estado del turno dl jugador.
         */
        void setTurn();
        /**
         * Metodo para establecer el ID del jugador.
         * @param i ID de tipo entero.
         */
        void setID(int i);
        /**
         * Metodo para obtener el ID del jugador.
         * @return ID de tipo entero.
         */
        int* getID();




};


#endif //PROYECTO_1_CLIENT_PLAYER_H