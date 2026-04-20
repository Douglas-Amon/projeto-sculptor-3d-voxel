# 🧊 Sculptor 3D com Voxels

Projeto desenvolvido para a disciplina **DCA3303 - Programação Avançada**.

Este projeto implementa um **escultor 3D baseado em voxels em C++**, permitindo a criação de objetos tridimensionais que podem ser exportados no formato **OFF** e visualizados em softwares como MeshLab.

---

## 🚀 Funcionalidades

* ✔ Criação de voxel individual (`putVoxel`)
* ✔ Remoção de voxel (`cutVoxel`)
* ✔ Criação de caixas (`putBox`)
* ✔ Remoção de caixas (`cutBox`)
* ✔ Criação de esferas (`putSphere`)
* ✔ Remoção de esferas (`cutSphere`)
* ✔ Criação de elipsoides (`putEllipsoid`)
* ✔ Remoção de elipsoides (`cutEllipsoid`)
* ✔ Exportação para arquivo `.OFF`

---

## 🧠 Conceito

O sistema utiliza uma matriz tridimensional de voxels:

```cpp
Voxel*** v;
```

Cada voxel possui propriedades como:

```cpp
struct Voxel {
    float r, g, b; // cores
    float a;       // transparência
    bool isOn;     // ativo ou não
};
```

---

## 📂 Estrutura do Projeto

```bash
📁 sculptor-3d-voxel
 ├── Sculptor.h
 ├── Sculptor.cpp
 ├── FiguraGeometrica.h
 ├── FiguraGeometrica.cpp
 ├── PutVoxel.cpp
 ├── CutVoxel.cpp
 ├── PutBox.cpp
 ├── CutBox.cpp
 ├── PutSphere.cpp
 ├── CutSphere.cpp
 ├── PutEllipsoid.cpp
 ├── CutEllipsoid.cpp
 ├── main.cpp
 └── README.md
```

---

## ▶️ Como compilar e executar

### Compilar

```bash
g++ *.cpp -o sculptor
```

### Executar

```bash
./sculptor
```

No Windows:

```bash
sculptor.exe
```

---

## 📤 Saída do programa

O programa gera arquivos no formato:

```bash
modelo.off
```

Esses arquivos podem ser visualizados em:

* 🧰 MeshLab
* 🌐 Online 3D Viewer

---

## 🧊 Exemplo de uso

```cpp
sculptor.setColor(1, 0, 0, 1); // vermelho
sculptor.putSphere(10, 10, 10, 5);
```

---

## 🎯 Objetivo

Aplicar conceitos de:

* Programação orientada a objetos (POO)
* Alocação dinâmica de memória
* Manipulação de matrizes tridimensionais
* Modelagem geométrica
* Exportação de malhas 3D

---

## 📌 Tecnologias utilizadas

* C++
* Programação Orientada a Objetos
* Estruturas dinâmicas
* OFF file format

---

## 👨‍💻 Autor

Douglas Amon -
Universidade Federal do Rio Grande do Norte (UFRN)

---

## ⭐ Possíveis melhorias

* Interface gráfica
* Exportação para outros formatos (OBJ, STL)
* Iluminação e shading
* Otimização de memória
* Editor interativo

---
