#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct lista{
    int dado;
    struct lista *link;
}no;

no*crialista(int n){
    no *topo, *p;
    int valor;
    topo = NULL;
    for(int i=1;i<=n;i++){
        printf("\n Digite o valor %d da pilha: ",i);
        scanf("%d",&valor);
        
        p = (no*)malloc(sizeof(no));
        p->dado = valor;
        p->link = topo;
        topo=p;
    }
    return topo;
}
void escrevelista(no*p){
    while(p!=NULL){
        printf("%d\t", p->dado);
        p=p->link;
    }
    printf("\n");
}
int main(){
    no*primeira;
    int n;
    printf("Criando uma lista encadeada");
    do{
        printf("\nEntre com o numero de nois: ");
        scanf ("%d", &n);
        }while(n<0);
    primeira = crialista(n);
    if(primeira != NULL){
        printf("\n Lista criada");
        printf("\n");
        escrevelista(primeira);
    }
    else
        printf("\nLista vazia");
    return(0);
}
