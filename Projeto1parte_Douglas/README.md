# 🧊 Sculptor 3D - Parte 1

Esta etapa corresponde à **primeira parte do projeto Sculptor 3D**, cujo objetivo é implementar a estrutura básica de um sistema de modelagem tridimensional utilizando **voxels**.

---

## 🎯 Objetivo

Implementar uma classe capaz de representar um espaço tridimensional e permitir a manipulação de voxels, servindo como base para a construção de objetos 3D.

---

## 🧠 Conceitos aplicados

* Programação Orientada a Objetos (POO)
* Alocação dinâmica de memória
* Matrizes tridimensionais
* Manipulação de ponteiros em C++

---

## 🧊 Estrutura básica

O sistema utiliza uma matriz 3D de voxels:

```cpp
Voxel*** v;
```

Cada voxel possui atributos como:

```cpp
struct Voxel {
    float r, g, b; // cores
    float a;       // transparência
    bool isOn;     // indica se o voxel está ativo
};
```

---

## ⚙️ Funcionalidades implementadas

* ✔ Criação do espaço tridimensional
* ✔ Definição de cor do voxel
* ✔ Ativação de voxel (`putVoxel`)
* ✔ Remoção de voxel (`cutVoxel`)
* ✔ Destrutor com liberação de memória
* ✔ Exportação para arquivo `.OFF`

---

## 📂 Estrutura dos arquivos

```bash
📁 projeto1parte_Douglas
 ├── Sculptor.h
 ├── Sculptor.cpp
 ├── main.cpp
 └── README.md
```

---

## ▶️ Como compilar e executar

### Compilar

```bash
g++ Sculptor.cpp main.cpp -o sculptor
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

## 📤 Saída

O programa gera arquivos no formato:

```bash
saida.off
```

Esses arquivos podem ser visualizados em:

* 🧰 MeshLab
* 🌐 Online 3D Viewer

---

## 💡 Observações

Esta é a etapa inicial do projeto, focada na estrutura básica.
As próximas partes incluem a implementação de classes abstratas e herança.

## 👨‍💻 Autor

Douglas Amon -
UFRN - Universidade Federal do Rio Grande do Norte

---

---

