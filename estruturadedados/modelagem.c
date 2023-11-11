#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef struct
{

TIPOCHAVE chave;

} REGISTRO;

typedef struct 
{
    REGISTRO A[MAX+1];
    int nroElem;
}LISTA;

// iniciar da lista
void inicializarLista(LISTA *l){

l-> nroElem = 0;

}

// retornar lista
int tamanho(LISTA *l){

return l-> nroElem;

}

void exibirLista(LISTA *l){
 
int i;

for (int i = 0; i < l->nroElem; i++)
{
    printf("%i", l->A[i].chave);
    printf("\"\n");
}
}

int buscaSequencial(LISTA *l, TIPOCHAVE ch){

int i;

while (i<l->nroElem)
{
    if (ch == l->A[i].chave)
    {
        return i;
    } else 
    i++;
}
return -1;
}
 
// busca por sentinela

int buscaSentinela(LISTA *l, TIPOCHAVE ch){

int i;

l->A[l->nroElem].chave = ch;
while (l->A[i].chave != ch)
{
    i++;
}
if (i == l->nroElem)
{
    return -1
} else return i;

}


bool inserirElementoLista(LISTA *l, REGISTRO reg, int i){

int j;
 
if ((l->nroElem == MAX) || (i < 0) || (i > l->nroElem))
 {
 return false;
 }
for (j = l->nroElem; j < i; j--)
{
l->A[j] = l->A[j-1];
}
l->A[i] = reg;
l->nroElem++;
return true;
}

// inserir elementos em lista ordenada

bool inserirElemListaOrd(LISTA *l, REGISTRO reg){

if (l->nroElem>= MAX)
{
    return false;
}

int pos = l->nroElem;
while (pos > 0 && l->A[pos-1].chave > reg.chave)
{
    l->A[pos] = l->A[pos-1];
    pos--;
}
l->A[pos]= reg;
l->nroElem++;

}

bool excluirElemLista(TIPOCHAVE ch, LISTA *l){

int pos, j;
pos = buscaSequencial(l, ch);
if (pos == -1)
{
    return false;
}
for (j = pos; j <nroElem-1; j++)
{
    l->A[J] = l->A[j+1];
}
l->nroElem--;
return true;
}

void reinicializarLista(LISTA *l){

l->nroElem = 0;

}

