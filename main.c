#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "list.h"




/**
 * @brief Procura um número numa lista.
*
* Percorre a lista fornecida à procura do número especificado.  
* Retorna o índice da primeira ocorrência do número, se encontrado.  
* Caso contrário, retorna -1.
*
* @param l A lista onde será feita a procura.
* @param num O número a procurar na lista.
* @return O índice do número na lista, ou -1 se não for encontrado ou se a lista for NULL.
*/
int searchList(PtList l, int num);


/**
 * @brief Ordena os elementos da lista por ordem crescente.
 *
 * Ordena a lista fornecida utilizando o algoritmo de ordenação 
 * Selection Sort. A ordenação é feita in-place, modificando a lista original.
 *
 * Se a lista for NULL, não faz nada.
 *
 * @param l A lista a ser ordenada.
 */
void sortList(PtList l);
int main() {

    /* Program code. */
    printf("I do nothing at this moment.\n");
    PtList list = listCreate();

    int num;
    scanf("%d", &num);

    switch (listAdd(list, 0, num))
    {
    case LIST_EMPTY:
        printf("List is Empty\n");
        break;
    case LIST_FULL:
        printf("List is Full\n");
        break;
    case LIST_INVALID_RANK:
        printf("Invalid Rank\n");
        break;

    case LIST_NO_MEMORY:
        printf("List has no memory\n");
        break;
    
    case LIST_NULL:
        printf("List is Null\n");
        break;
    default:
        printf("List is Ok!\n");
        break;
    }

    listAdd(list, 0, num);
    listAdd(list, 0, 2);
    listAdd(list, 0, 98);
    listAdd(list, 0, 7);
    listAdd(list, 0, 8);
    listAdd(list, 0, 69);
    int lSize; 
    listSize(list, &lSize);
    printf("%d\n", lSize);
    int n;
    listPrint(list);

    printf("asodijaissaoid\n");
    for(int i = 0; i < lSize; i++){
        listGet(list, i, &n);
        printf("%d\n", n);
    }

    int res;
    res = searchList(list, 1);

    printf("Res: %d\n", res);


    listDestroy(&list);

    return EXIT_SUCCESS;
}

int searchList(PtList l, int num){
    int size;
    int get;
    listSize(l, &size);

    for(int i = 0; i < size; i++){
        listGet(l, i, &get);
        if(get == num) return i;
    }

    return -1;
}
