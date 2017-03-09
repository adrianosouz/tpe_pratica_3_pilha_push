#include <stdio.h>
#include <stdlib.h>
#include "pilha_lista.h"

/*no da lista*/
struct lista
{
    float info;
    struct lista *prox;
};


/*estrutura da pilha*/
struct pilha
{
    Lista* prim;
};

Pilha* pilha_cria(void)
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void pilha_push(Pilha* p,float v)
{
    Lista*n = (Lista*)malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}

int pilha_pop(Pilha* p)
{
    Lista* t;
    float v;
    if(pilha_vazia(p))
    {
        printf("pilha vazia.\n");
        exit(1);
    }
    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    free(t);
    return v;
}


void pilha_imprime_(Pilha* p,int n)
{
    Lista* t;

    int cont=1;
    if (pilha_vazia(p))
    {
        printf("Pilha vazia.\n");
        exit(1);
    }
    while (t!=NULL)
    {
        if(n==cont)
        {
            printf("O elemento  de indice n = %d eh: %.2f\n\n",n,t->info);
        }
        cont++;
        t = t->prox;

    }
}


/*int reempilha(Pilha* p, Pilha* p_par, Pilha* p_impar)
{
    int aux;
    if (pilha_vazia(p))
       return 1;
    else
    {   //seleciona os valores Impares
        Lista* l;
    for(l=p; l!=NULL; l=l->prox)
        if (l->info%2)
        {
               aux = pilha_pop(l);
               pilha_push(p_impar, aux);
        }
        else //seleciona valores pares
        {
               aux = pilha_pop(l);
               pilha_push(p_par, aux);
        }
        reempilha (l, p_par, p_impar);
        return 0;
    }

}*/
/*funcao imprime*/
void pilha_imprime(Pilha* p)
{
    Lista* q;
    for(q = p->prim; q!=NULL; q=q->prox)

    {
        printf("%.2f\n",q->info);
    }
}

int pilha_vazia(Pilha* p)
{
    return(p->prim==NULL);
}

void pilha_libera(Pilha* p)
{
    Lista* q = p->prim;
    while(q!=NULL)
    {
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}


/*void pilha_imprime_quant(Pilha* p)
{

    if(p == NULL)
    {
        printf("pilha vazia");
        return;
    }
    else
    {
        Lista* q;
        int cont = 0;
        for(q = p->prim; q!=NULL; q=q->prox)
        {
            cont++;
        }
        printf("\nA quantidade de elementos eh: %s\n",cont);
    }
}
*/
/*void pilha_imprime_par(Pilha* p)
{
    Lista* q;
    int aux,par;
    if(p == NULL)
    {
        printf("pilha vazia");
        return;
    }
    else
    {
        for(q = p->prim; q!=NULL; q=q->prox)
        {
            aux = q->info%2;
            if(aux==0)
            {
                par = q->info;
                printf("\n%d",par);
            }
        }
    }
}
*/
/*void pilha_imprime_quant_par(Pilha* p)
{
    Lista* q;
    int aux,par,cont = 0;
    if(p == NULL)
    {
        printf("pilha vazia");
        return;
    }
    else
    {
        for(q = p->prim; q!=NULL; q=q->prox)
        {
            aux = q->info%2;
            if(aux==0)
            {
                par = q->info;
                cont++;
            }
        }
        printf("A quantidade de numeros pares eh:\n\n%d",cont);
    }
}
*/
/*void pilha_imprime_impar(Pilha* p)
{
    Lista* q;
    int aux,impar;
    if(p == NULL)
    {
        printf("pilha vazia");
        return;
    }
    else
    {
        for(q = p->prim; q!=NULL; q=q->prox)
        {
            aux = q->info%2;
            if(aux==1)
            {
                impar = q->info;
                printf("\n%d",impar);
            }
        }
    }
}
*/
/*void pilha_imprime_par_impar(Pilha* p)
{
    Lista* q;
    int aux,x,par,impar;
    if(p == NULL)
    {
        printf("pilha vazia");
        return;
    }
    else
    {

        for(q = p->prim; q!=NULL; q=q->prox)
        {
            aux = q->info%2;
            if(aux==0)
            {
                par = q->info;
                printf("\nPar:%d\n",par);
            }
        }


            for(q = p->prim; q!=NULL; q=q->prox)
        {
            x = q->info%2;
            if(x==1)
            {
                impar = q->info;
                printf("\nimpar:%d\n",impar);
            }
        }
    }
}

*/

