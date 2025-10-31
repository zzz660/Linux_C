#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *Next;
} *Node;

int main(void)
{
    Node n1 = malloc(sizeof(struct Node));
    n1->data = 0;
    n1->Next = NULL;
    free(n1);
}
