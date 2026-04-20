#ifndef LEITOR_H
#define LEITOR_H
#include <vector>
#include <string>
#include "FiguraGeometrica.h"
#include "Sculptor.h"

//Classe Leitor, responsável por ler arquivos de entrada para implementar

class Leitor{
    int dimX, dimY, dimZ; // Dimensões do Sculptor
    float r, g, b, a;
public:
    Leitor(); // Construtor padrão
    std::vector<FiguraGeometrica*> analise(std::string filename); // Método para ler o arquivo e retornar um vetor de figuras geométricas que eu quero desenhar
    int getdimX(); // Retorna a dimensão X do Sculptor
    int getdimY(); // Retorna a dimensão Y do Sculptor
    int getdimZ(); // Retorna a dimensão Z do Sculptor
};

#endif // LEITOR_H