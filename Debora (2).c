#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void separacaoEnfeite(){
printf("-*-*-*-*-*-*-*-*-*-*-*-*-CALCULO AREA DO POLIGNO*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
//Novo tipo de dados
typedef struct {
    float x;
    float y;
} Ponto;

float calcularAreaTriangulo(Ponto a, Ponto b, Ponto c) {  //Calculo da area do triangulo
    return fabs((a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y)) / 2.0);  //Formula
}

float calcularAreaPoligono(Ponto vertices[], int numVertices) {
    float areaTotal = 0.0;
    Ponto primeiroVertice = vertices[0];

    for (int i = 1; i < numVertices - 1; i++) {
        float areaTriangulo = calcularAreaTriangulo(primeiroVertice, vertices[i], vertices[i+1]);
       
       
       
        areaTotal += areaTriangulo;
    }

    return areaTotal;
}
// Função principal
int main() {
    FILE *arquivo; //Ponteiro para o arquivo de entrada
    int numVertices;
    Ponto *vertices;
    int i = 0;

    arquivo = fopen("TRIANGULOABC.txt", "r");
    if (arquivo == NULL) {
        printf("Algo esta errado!\n");
        return 1; // Encerra o programa com código de erro
    }

    fscanf(arquivo, "%d", &numVertices);

    vertices = (Ponto *)malloc(numVertices * sizeof(Ponto));
    if (vertices == NULL) {
        printf("Algo esta errado na memoria!\n");
        return 1; // Encerra o programa com código de erro
    }
for (i = 0; i < numVertices; i++) {
        fscanf(arquivo, "%f %f", &vertices[i].x, &vertices[i].y);
    }

    fclose(arquivo);

    float area = calcularAreaPoligono(vertices, numVertices);
    separacaoEnfeite();
    printf("\nA area total do poligono vai ser: %.2f\n", area);
   
     printf("\n__________________________________________________________________________");
     //Libera a memória alocada para o array de vertices
    free(vertices);

    return 0;
}



