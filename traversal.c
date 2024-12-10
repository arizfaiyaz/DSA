#include <stdio.h>
#include <stdlib.h>

// structure of node
struct Node {
    int data;
    struct Node* next;
}*head;

void createlist(int n);
void traverseList();

int main () {
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    createList(n);
    printf("%d", &n);
    traverseList();
    return 0;

}

void createList(int n){
    struct node *newNode, *temp;
    int data, i;
    
    head = (struct node *)malloc(sizeof(struct node));

}
