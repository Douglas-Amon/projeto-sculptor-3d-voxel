#include "sculptor.h"
#include <iostream>

int main() {
    Sculptor olaf(60, 80, 60);
    float a = 1.0f;

    // Corpo - 3 bolas de neve
    olaf.setColor(1.0f, 1.0f, 1.0f, a); // Branco
    olaf.putEllipsoid(30, 15, 30, 8, 8, 8);  // Parte de baixo
    olaf.putEllipsoid(30, 28, 30, 6, 5, 6);  // Meio
    olaf.putEllipsoid(30, 40, 30, 5, 6, 5);  // Cabeça

    // Nariz (cenoura)
    olaf.setColor(1.0f, 0.5f, 0.0f, a); // Laranja
    olaf.putEllipsoid(30, 41, 36, 1, 1, 6); // Cenoura "cone" no nariz

    // Olhos
    olaf.setColor(0.9f, 1.0f, 0.9f, a); // Branco dos Olhos
    olaf.putBox(27, 29, 43, 45, 35, 36);
    olaf.putBox(32, 34, 43, 45, 35, 36);

    olaf.setColor(0.0f, 0.0f, 0.0f, a); // Pupilas
    olaf.putVoxel(28, 43, 35);
    olaf.putVoxel(28, 44, 35);
    olaf.putVoxel(32, 43, 35);
    olaf.putVoxel(32, 44, 35);

    // Sorriso (curvado com voxels pretos)
    olaf.cutBox(27, 28, 38, 40, 32, 37);
    olaf.cutBox(28, 33, 36, 39, 32, 37);
    olaf.cutBox(33, 34, 38, 40, 32, 37);

    olaf.setColor(0.85f, 1.0f, 0.855f, a);
    olaf.putBox(29, 32, 37, 39, 35, 36); //Dente

    olaf.setColor(0.451f, 0.608f, 0.816f, a);
    olaf.putBox(28, 33, 36, 39, 32, 34);
    olaf.putBox(27, 28, 38, 40, 32, 34);
    olaf.putBox(33, 34, 38, 40, 32, 34);
    

    // Botões no corpo
    olaf.setColor(0.0f, 0.0f, 0.0f, a); // Preto
    olaf.putBox(28, 33, 26, 31, 37, 38); // botão superior
    olaf.putBox(28, 33, 17, 22, 39, 40); // botão médio
    olaf.putBox(28, 33, 10, 15, 39, 40); // botão inferior

    // Braços
    olaf.setColor(0.4f, 0.2f, 0.0f, a); // Marrom
    olaf.putBox(18, 30, 28, 29, 30, 31); // braço esquerdo
    olaf.putBox(30, 42, 28, 29, 30, 31); // braço direito
    olaf.putVoxel(40, 29, 30);
    olaf.putVoxel(41, 30, 30);
    olaf.putVoxel(41, 26, 30);
    olaf.putVoxel(40, 27, 30);
    olaf.putVoxel(18, 29, 30);
    olaf.putVoxel(17, 30, 30);
    olaf.putVoxel(18, 27, 30);
    olaf.putVoxel(17, 26, 30);
    olaf.putVoxel(17, 28, 30);

    // Cabelos (galhos mais naturais)
    olaf.setColor(0.3f, 0.15f, 0.0f, a); // Marrom escuro

    // Galho central (reto, vertical)
    olaf.putBox(30, 31, 46, 52, 30, 31);
    olaf.putVoxel(29, 47, 30);
    olaf.putVoxel(28, 48, 29);
    olaf.putVoxel(27, 49, 28);
    olaf.putVoxel(31, 47, 30);
    olaf.putVoxel(32, 48, 31);
    olaf.putVoxel(33, 49, 32);

    // Pés
    olaf.setColor(1.0f, 1.0f, 1.0f, a); // Branco
    olaf.putEllipsoid(26, 6, 30, 2, 2, 3); // Pé esquerdo
    olaf.putEllipsoid(34, 6, 30, 2, 2, 3); // Pé direito

    // Neve caindo (flocos espalhados no espaço)
    olaf.setColor(0.95f, 0.95f, 1.0f, 0.6f); // Branco gelo translúcido

    for (int i = 0; i < 800; i++) { // Aumentado para cobrir mais espaço
        int x = rand() % 60;          // X entre 0 e 59
        int y = rand() % 80;          // Y entre 0 e 79 (do chão até o topo da cena)
        int z = rand() % 60;          // Z entre 0 e 59

    // Evita colocar neve muito dentro do Olaf
        if (!((x >= 20 && x <= 40) && (y >= 5 && y <= 45) && (z >= 20 && z <= 40))) {
            olaf.putVoxel(x, y, z);
        }
    }

    // Exportar modelo
    olaf.writeOFF("olaf.off");

    return 0;
}
