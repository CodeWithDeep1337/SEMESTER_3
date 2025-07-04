#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void delete(struct Node* head,int k) {
    struct Node* temp = head;
    
 for(int i=0;i<k-1;k++){
   
    temp->next=temp->next->next;

 }
 free(temp->next);
}
 struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

int main() {
   
   

    // Allocate memory for nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;       // First node
    head->next = second;

    second->data = 2;     // Second node
    second->next = third;

    third->data = 3;      // Third node
    third->next = NULL;

    // Print the linked list
    printf("Linked List: ");
    display(head);
    delete(head,2);
    

    // Free allocated memory
    // free(head);
    // free(second);
    // free(third);

    return 0;
}
