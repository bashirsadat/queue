#include "process.h"
typedef struct node_s{
		process process_data;
		struct node_s *next;
		struct node_s *prev;
} node;

void enqueue(node *item);
// void dequeue(node **head, process item);
node* dequeue();
int search(node *head, process item);
void print_queue(node **head_ref); 
int size(node *head);
// void delete_first(node **head);
// void delete_last(node **head);
// int delete_item(node **head, student item);