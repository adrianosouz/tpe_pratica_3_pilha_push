#ifndef PILHA_LISTA_H_INCLUDED
#define PILHA_LISTA_H_INCLUDED


typedef struct lista Lista;

typedef struct pilha Pilha;

Pilha* pilha_cria(void);

void pilha_push(Pilha* p, float v);

int pilha_pop(Pilha* p);

void pilha_imprime(Pilha* p);

void pilha_imprime_(Pilha* p,int n);

int pilha_vazia(Pilha* p);

void pilha_libera(Pilha* p);

/*void pilha_imprime_quant(Pilha* p);

void pilha_imprime_par(Pilha* p);

void pilha_imprime_quant_par(Pilha* p);

void pilha_imprime_impar(Pilha* p);

void pilha_imprime_par_impar(Pilha* p);

int reempilha(Pilha* p, Pilha* p_par, Pilha* p_impar);*/


#endif // PILHA_LISTA_H_INCLUDED
