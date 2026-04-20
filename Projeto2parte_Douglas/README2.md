# 🧊 Sculptor 3D - Parte 2

Esta etapa corresponde à **segunda parte do projeto Sculptor 3D**, onde o sistema foi expandido para permitir a criação de **figuras geométricas complexas** utilizando o conceito de voxels.

---

## 🎯 Objetivo

Evoluir o sistema Sculptor implementando **operações geométricas** e utilizando **programação orientada a objetos com herança e polimorfismo**.

---

## 🧠 Conceitos aplicados

* Programação Orientada a Objetos (POO)
* Herança e polimorfismo
* Classes abstratas
* Alocação dinâmica de memória
* Manipulação de arquivos
* Modelagem geométrica 3D

---

## 🧊 Estrutura do sistema

O sistema é baseado em uma classe principal (`Sculptor`) e uma classe abstrata para representar figuras:

```cpp
class FiguraGeometrica {
public:
    virtual void draw(Sculptor &t) = 0;
    virtual ~FiguraGeometrica() {}
};
```

As figuras geométricas implementam esse método `draw()`.

---

## ⚙️ Funcionalidades implementadas

* ✔ Criação de voxel (`putVoxel`)
* ✔ Remoção de voxel (`cutVoxel`)
* ✔ Criação de caixas (`putBox`)
* ✔ Remoção de caixas (`cutBox`)
* ✔ Criação de esferas (`putSphere`)
* ✔ Remoção de esferas (`cutSphere`)
* ✔ Criação de elipsoides (`putEllipsoid`)
* ✔ Remoção de elipsoides (`cutEllipsoid`)
* ✔ Definição de cor (`setColor`)
* ✔ Exportação para `.OFF`

---

## 📥 Leitura de comandos

O projeto permite a leitura de comandos a partir de arquivo `.txt`, possibilitando construir modelos automaticamente.

Exemplo de comandos:

```txt
dim 30 30 30
putBox 5 10 5 10 5 10 1 0 0 1
cutSphere 15 15 15 5
```

---

## 📂 Estrutura do projeto

```bash
📁 Projeto2parte_Douglas
 ├── Sculptor.h / Sculptor.cpp
 ├── FiguraGeometrica.h / FiguraGeometrica.cpp 
 ├── PutVoxel.h / PutVoxel.cpp
 ├── CutVoxel.h / CutVoxel.cpp
 ├── PutBox.h / PutBox.cpp
 ├── CutBox. / CutBox.cpp
 ├── PutSphere.h / PutSphere.cpp
 ├── CutSphere.h / CutSphere.cpp
 ├── PutEllipsoid.h / PutEllipsoid.cpp
 ├── CutEllipsoid.h / CutEllipsoid.cpp
 ├── main.cpp
 ├── arquivo.txt
 ├── comandoparacompilar.txt
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

## 📤 Saída

O programa gera arquivos:

```bash
saida.off
```

Visualização em:

* 🧰 MeshLab
* 🌐 Online 3D Viewer

---

## 🚀 Evolução em relação à Parte 1

* Implementação de **figuras geométricas**
* Uso de **herança e polimorfismo**
* Leitura de comandos via arquivo
* Estrutura mais modular e extensível

---

## 📌 Tecnologias utilizadas

* C++
* Programação Orientada a Objetos
* OFF file format

---

## 👨‍💻 Autor

Douglas Amon -
UFRN - Universidade Federal do Rio Grande do Norte

---

---
