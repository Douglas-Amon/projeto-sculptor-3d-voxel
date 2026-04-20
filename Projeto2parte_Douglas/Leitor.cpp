#include "Leitor.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "PutVoxel.h"
#include "CutVoxel.h"
#include "PutBox.h"
#include "CutBox.h"
#include "PutSphere.h"
#include "CutSphere.h"
#include "PutEllipsoid.h"
#include "CutEllipsoid.h"

// Construtor padrão
Leitor::Leitor(){

}

std::vector <FiguraGeometrica*> Leitor::analise(std::string filename) {
    std::vector <FiguraGeometrica*> figs;
    std::ifstream entrada;
    std::stringstream ss;
    std::string s;
    std::string conteudo;

    entrada.open(filename.c_str()); // Abre o arquivo para leitura
    if (!entrada.is_open()) {
        std::cout << "Erro ao abrir o arquivo:" << filename << std::endl;
        return figs; // Retorna vetor vazio se não conseguir abrir o arquivo
    }

    while (entrada.good()){

        getline(entrada, s); // Lê uma linha do arquivo

        if(entrada.good()){
            ss.clear(); // Limpa o estado do stringstream
            ss.str(s); // Define o conteúdo do stringstream como a linha lida
            ss >> conteudo; // Lê o primeiro token da linha

            if(ss.good()){
                
                if (conteudo.compare("dim") == 0) { // Verifica se o conteudo é "dim"
                    ss >> dimX >> dimY >> dimZ; // Lê as dimensões
                } 
                
                else if (conteudo.compare("putvoxel") == 0) { // Verifica se o conteudo é "putvoxel"
                    int x, y, z;
                    ss >> x >> y >> z >> r >> g >> b >> a; // Lê as coordenadas, cores e transparência
                    figs.push_back(new PutVoxel(x, y, z, r, g, b, a)); // Adiciona a figura ao vetor
                } 

                else if (conteudo.compare("cutvoxel") == 0) { // Verifica se o conteudo é "cutvoxel"
                    int x, y, z;
                    ss >> x >> y >> z; // Lê as coordenadas
                    figs.push_back(new CutVoxel(x, y, z)); // Adiciona a figura ao vetor
                } 
                
                else if (conteudo.compare("putbox") == 0) { // Verifica se o conteudo é "putbox"
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a; // Lê as coordenadas da caixa e as cores
                    figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a)); // Adiciona a figura ao vetor
                } 
                
                else if (conteudo.compare("cutbox") == 0) { // Verifica se o conteudo é "cutbox"
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a; // Lê as coordenadas da caixa e as cores
                    figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1)); // Adiciona a figura ao vetor
                } 
                
                else if (conteudo.compare("putsphere") == 0) { // Verifica se o conteudo é "putsphere"
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a; // Lê as coordenadas e o raio
                    figs.push_back(new PutSphere(xcenter, ycenter, zcenter, radius, r, g, b, a)); // Adiciona a figura ao vetor
                }
                
                else if (conteudo.compare("cutsphere") == 0) { // Verifica se o conteudo é "cutsphere"
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius; // Lê as coordenadas e o raio
                    figs.push_back(new CutSphere(xcenter, ycenter, zcenter, radius)); // Adiciona a figura ao vetor
                } 
                
                else if (conteudo.compare("putellipsoid") == 0) { // Verifica se o conteudo é "putellipsoid"
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a; // Lê as coordenadas do centro e os raios
                    figs.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a)); // Adiciona a figura ao vetor
                } 
                
                else if (conteudo.compare("cutellipsoid") == 0) { // Verifica se o conteudo é "cutellipsoid"
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz; // Lê as coordenadas do centro e os raios
                    figs.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz)); // Adiciona a figura ao vetor
                }
            }
        }
    }
    entrada.close(); // Fecha o arquivo
    return (figs); // Retorna o vetor de figuras 
}

int Leitor :: getdimX() {
    return dimX; // Retorna a dimensão X
}
int Leitor :: getdimY() {
    return dimY; // Retorna a dimensão Y
}
int Leitor :: getdimZ() {
    return dimZ; // Retorna a dimensão Z
}