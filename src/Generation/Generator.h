//
// Created by pda on 09.06.19.
//

#ifndef H_J_GENERATOR_H
#define H_J_GENERATOR_H

#include "GuiSuequenceFeatureReader.h"
#include "InterfaceSequences.h"

#include <string>
#include <string.h>
#include <vector>

using namespace std;

class ResultData;

class Generator {
public:
    ResultData *generate(ReadDTO &data);
};

class ResultData {
private:
    bool massive_type;
    int **sequences; //последовательности
    int lengths[L]; //длины последовательностей
public:
    void set_massive_type(bool);

    void set_sequences(int **sqcs);

    void set_lengths(int *lens);

    bool get_massive_type();//0-up 1-down

    int **get_sequences();

    int *get_lengths();

    void print();

};

class Writer {
public:
    void write(ResultData &); //запись каждой последовательности в отдельный файл
};

#endif //H_J_GENERATOR_H
