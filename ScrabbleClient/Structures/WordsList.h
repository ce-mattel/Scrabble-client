//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_LINKEDLIST_H
#define PROYECTO_1_CLIENT_LINKEDLIST_H

#include <string.h>
#include <iostream>
#include "NodeW.h"
#include "../Interface_Logic/Board_Logic/Matrix.h"

using namespace std;

class WordsList {
private:
    NodeW* head;
    int length;
    WordsList* next;
public:
    /**
     * Constructor de la clase Wordlist.
     */
    WordsList();
    /**
     * Metodo para obtener la longitud de la lista.
     * @return Longitud de tipo entero.
     */
    int getLength();
    /**
     * Metodo para obtener el puntero a la lista siguiente en la matriz.
     * @return Puntero de tipo WordsList.
     */
    WordsList* getNext();
    /**
     * Metodo para obtner el puntero a la cabeza de la lista.
     * @return Puntero de tipo NodeW.
     */
    NodeW* getHead();
    /**
     * Metodo para asignar el puntero hacia la lista de palabras siguiente.
     * @param w
     */
    void setNext(WordsList* w);
    /**
     * Metodo para añadir fichas a la lista.
     * @param c Puntero de tipo Chip.
     */
    void add(Chip* c);
    /**
     * Metodo para eliminar una ficha de la lista.
     * @param s
     */
    void del(string s);
    /**
     * Metodo para imprimir la lista en consola.
     */
    void print();
    /**
     * Metodo para saber si una palabra se puede escribir en la matriz.
     * @param w Puntero de tipo WordsList.
     */
    bool writeAble(WordsList* w);
    /**
     * Metodo para saber la cantidad de veces que está una letra en la lista.
     * @param l Letra de tipo string.
     * @return Cantidad de tipo entero.
     */
    int times(string l,WordsList* w);

};


#endif //PROYECTO_1_CLIENT_LINKEDLIST_H