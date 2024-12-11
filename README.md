# Cálculo da Área de um Polígono

Este é um programa em C que calcula a área de um polígono utilizando as coordenadas dos vértices fornecidas por um arquivo de entrada.

---

## Funcionalidades

- Lê um arquivo de texto contendo as coordenadas dos vértices de um polígono.
- Calcula a área do polígono utilizando a fórmula da soma das áreas dos triângulos formados pelos vértices.
- Exibe o resultado formatado no console.

---

## Estrutura do Código

1. **`typedef struct Ponto`**:
   - Define um novo tipo de dados para representar as coordenadas (x, y) de um ponto.
   
2. **Função `calcularAreaTriangulo`**:
   - Calcula a área de um triângulo usando a fórmula baseada em determinantes.
   
3. **Função `calcularAreaPoligono`**:
   - Soma as áreas dos triângulos formados pelos vértices do polígono.

4. **Função `main`**:
   - Lê os dados de um arquivo de texto (`TRIANGULOABC.txt`).
   - Calcula a área do polígono com base nos vértices lidos.
   - Libera a memória alocada dinamicamente.

---

## Arquivo de Entrada

O arquivo de entrada `TRIANGULOABC.txt` deve seguir o seguinte formato:

1. A primeira linha contém o número de vértices do polígono.
2. As linhas subsequentes contêm as coordenadas (x, y) de cada vértice.


---

## Como Usar

1. Certifique-se de ter o arquivo de entrada `TRIANGULOABC.txt` no mesmo diretório do programa.
2. Compile o código:
   ```bash
   gcc -o calculo_area calculo_area.c -lm

   
---

## Requisitos
GCC (Compilador de C).
Arquivo de entrada no formato especificado.


---

## Estrutura do Projeto
calculo_area.c: Código-fonte do programa.
TRIANGULOABC.txt: Arquivo de entrada contendo os vértices do polígono.



