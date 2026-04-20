#include <iostream>
#include <vector>
#include "FiguraGeometrica.h"
#include "Sculptor.h"
#include "PutVoxel.h"
#include "CutVoxel.h"
#include "PutBox.h"
#include "CutBox.h"
#include "PutSphere.h"
#include "CutSphere.h"
#include "PutEllipsoid.h"
#include "CutEllipsoid.h"
#include "Leitor.h"

int main()
{
    Sculptor *Escultor; // Ponteiro para o objeto Sculptor

    Leitor Analisador; // Cria um objeto Leitor para analisar o arquivo de entrada

    std::vector<FiguraGeometrica*> figs; // Uso de container vector para armazenar as figuras geométricas
    // <vector> permite qualquer tamanho e tipo a ser armazenado
        
    figs = Analisador.analise("arquivo.txt"); // Lê o arquivo de entrada e armazena as figuras

    Escultor = new Sculptor(Analisador.getdimX(), Analisador.getdimY(), Analisador.getdimZ());

    for(int i = 0; i < figs.size(); i++) {
        std::cout << "Desenhando figura... " << std::endl;
        figs[i]->draw(*Escultor); // Desenha cada figura no Sculptor
    }

    Escultor->writeOFF("Desenho.off"); // Escreve o desenho final em um arquivo OFF

    // Libera a memória alocada para as figuras
    for(int i = 0; i < figs.size(); i++) {
        delete figs[i]; // Libera a memória de cada figura do vetor
    }
    delete Escultor; // Libera a memória do objeto da classe Sculptor

    return 0;
}