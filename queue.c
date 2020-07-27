#include "queue.h"

// this is the queue 'header'
typedef struct {
	struct node_s *first;			// pointer to first item
	struct node_s *last;			// pointer to last item
} LISTHDR;

LISTHDR head;						// declare this statically so that 'enqueue' and 'dequeue' can use it

// this puts an item in at the end of the queue
void enqueue(node *item) {
	node *temp;

	temp = head.last;				// get the 'last' item in the queue and keep hold of it
	head.last = item;				// put the item in the queue at the end
	item->prev = temp;				// link back to old 'last' item
	item->next = (node*)&head;	// set the forward link of the new item
	temp->next = item;				// and finally set the forward link of the old 'last' item to the new one
}

// this removes an item from the front of the queue - returns the item or NULL if there are no more items
node* dequeue() {
	node *temp;

	temp = head.first;				// get the 'first' item
	if (temp == (node*)&head) {	// if the head of the queue points to itself ...
		temp = NULL;				// ... then the queue is empty 			
	}
	else {
		head.first = temp->next;		// and set the queue header to point to the 'second' item
		head.first->prev = (node*)&head;
	}
	return temp;
}



void print_queue(node **head_ref) 
{ 
    node *tail = *head_ref; 
  
    // Traversing till tail of the linked list 
    while (tail->next != NULL) { 
        tail = tail->next; 
    } 
  
    // Traversing linked list from tail 
    // and printing the node->data 
    while (tail != *head_ref) { 
			print_process(tail->process_data);
      tail = tail->prev; 
    } 
    print_process(tail->process_data);
}

int search(node *head, process item)  
{  
    if(head == NULL)  
    {  
			// return -1;
        printf("\nEmpty List\n");  
    }  
    else  
    {   
			node *current = head;
        
				 
        while (current !=NULL)  
        {  
            if(compare_process(current->process_data,item) == 0)  
            {  
                return 1;     
            }   
             
            current = current -> next;  
        }  
        return -1;
         
    }     
          
} 


int size(node *head)
{ 
    int count = 0;  // Initialize count 
    node* current = head;  // Initialize current 
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 
