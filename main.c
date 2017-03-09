#include <stdio.h>
#include <stdlib.h>
#include "pilha_lista.h"

int main()
{

    Pilha* p;

    p=pilha_cria();

    pilha_push(p,1);
    pilha_push(p,2);
    pilha_push(p,3);
    pilha_push(p,4);

    pilha_imprime_(p,3);
    pilha_imprime(p);



    return 0;
}


/*pilha_imprime_quant(p);*/

/*printf("\n\nOs numeros pares da lista sao:\n");
pilha_imprime_par(p);
printf("\n\n");

/*pilha_imprime_quant_par(p);*/

/*printf("\n\nOs numeros impares da lista sao:\n");
pilha_imprime_impar(p);
printf("\n\n");

pilha_imprime_par_impar(p);*/

/*printf("\n\nPilha sem o ultimo elemento\n\n");*/

/* for( i=0; nome[i]!= '\0';i++)
 {
     if(nome[i] == '{')
     {
         pilha_push(p,'{');
     }
     if(nome[i] == '[')
     {
          pilha_push(p,'[');
     }
     if(nome[i] == '(')
     {
          pilha_push(p,'(');
     }

     if(nome[i] == ')')
     {
          v=pilha_pop(p);
          if(v != '(')
          {
          printf("Expressao esta desbalanciada\n");
          exit(1);

          }
     }

      if(nome[i] == ']')
     {
          v=pilha_pop(p);
          if(v != '[')
          {
          printf("Expressao esta desbalanciada\n");
          exit(1);

          }
     }


     if(nome[i] == '}')
     {
          v=pilha_pop(p);
          if(v != '{')
          {
          printf("Expressao esta desbalanciada\n");
          exit(1);
          }
          }

 }*/

