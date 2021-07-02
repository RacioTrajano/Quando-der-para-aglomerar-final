#include <stdio.h>

/*int unique (int n, int values[n], int uniqueValues[n]){

int leitura;
int pos = 0;

  for (int i=0; i< n; i++){
    scanf("%d", &leitura);
    if (values[leitura]== 0){
      values[leitura] =1;
      uniqueValues[pos]=leitura;
      pos++;
    }
}

return pos ;
}
*/

int main () {

int leitura;
int pos = 0;
int num_leituras;
int vet_aux[20]= {0};
int vet_resultado[20]={0};
scanf("%d", &num_leituras);

/*int tam = unique(num_leituras, vet_aux, vet_resultado);
*/

for (int i=0; i< num_leituras; i++){
    scanf("%d", &leitura);
    if (vet_aux[leitura]== 0){
      vet_aux[leitura] =1;
      vet_resultado[pos]=leitura;
      pos++;
    }
}



for (int i=0; i<20; i++){
  if(vet_resultado[i] != 0)
  printf("%d ", vet_resultado[i]);
}

  return 0;
}