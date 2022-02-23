#include <stdio.h>
#include <stdlib.h>

//ESTRUTURA PARA GUARDAR UM BLOCO
typedef struct bloco{
  int id;
  int altura;
  struct bloco* prox;
} bloco;

typedef struct bloco * p_Bloco;


//ESTRUTURA PARA GUARDAR UM MACACO
typedef struct Macaco{
  int altura;
  struct bloco* lista_blocos;
} Macaco;

typedef struct Macaco * p_Macaco;

p_Macaco inicializa_macacos(int x){
	p_Macaco Mac =(p_Macaco) calloc(x, sizeof(Macaco));
	return Mac;
}

void bota_no_menor(p_Macaco M, int num_macacos, int id_bloco, int altura_bloco){
	p_Bloco end_bloco = (p_Bloco) malloc(sizeof(bloco));

   int i=0, pos_menor, menorM=M[0].altura+1;
  
   while (i<num_macacos){
    if (M[i].altura < menorM){ 
      menorM=M[i].altura;
      pos_menor=i;
    }
    i++;
   }
   end_bloco->prox = M[pos_menor].lista_blocos;
   M[pos_menor].altura= M[pos_menor].altura + altura_bloco;

   end_bloco->id=id_bloco;
   end_bloco->altura=altura_bloco;
   M[pos_menor].lista_blocos=end_bloco;
}

//FUNCOES PARA IMPRESSAO
void imprime_blocos(p_Bloco lista){
  if(lista == NULL) return;
  imprime_blocos(lista->prox);
  printf(" %d %d", lista->id, lista->altura);
}

void imprime_macacos(p_Macaco M, int num_macacos){
	int i;
  for( i = 0; i < num_macacos; i++){
    printf("M[%d] altura = %d:", i, M[i].altura);
    imprime_blocos(M[i].lista_blocos);
    printf("\n");
  }
}

void libera_macacos(p_Macaco M, int num_macacos){
  int i=0;
  p_Bloco liberam;
  while (i<num_macacos){
      while(M[i].lista_blocos != NULL){ 
         liberam=M[i].lista_blocos;
         M[i].lista_blocos= M[i].lista_blocos->prox;
         free(liberam);
      } 
      i++;
  }
}


//******************************
//VOCE NAO PODE MODIFICAR A MAIN
//******************************
int main(int argc, char * argv[]){
  
  p_Macaco M;
  int num_macacos;
  int id_bloco;
  int altura_bloco;
  
  //le o numero de macacos
  scanf("%d", &num_macacos);
  
  M = inicializa_macacos(num_macacos);
  
  //le o primeiro bloco
  scanf("%d %d", &id_bloco, &altura_bloco);
  while(id_bloco != -1){
    bota_no_menor(M, num_macacos, id_bloco, altura_bloco);
    //le o proximo bloco
    scanf("%d %d", &id_bloco, &altura_bloco);
  }

  imprime_macacos(M, num_macacos);
  
  //Lembre que cada macaca tem uma lista que precisa ser liberada
  libera_macacos(M, num_macacos);
  return 0;
}




