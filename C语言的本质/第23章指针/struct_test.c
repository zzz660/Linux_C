#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertTail(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL)
        return newNode;
    struct Node* p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = newNode;
    return head;
}

void printList(struct Node* head) {
    struct Node* p = head;
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void freeList(struct Node* head) {
    struct Node* p;
    while (head != NULL) {
        p = head;
        head = head->next;
        free(p);
    }
}

int main() {
    struct Node* head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);

    printList(head); // 输出: 10 -> 20 -> 30 -> NULL

    freeList(head);
    return 0;
}
