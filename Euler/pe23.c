#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOUND 28123

typedef struct node {
    int data;
  	struct node * next;
} Node;

typedef struct list {
	Node * head; 
	int size;
} List;

Node * createnode(int data);

Node * createnode(int data){
  	Node * newNode = malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

List * emptylist(){
	List * list = malloc(sizeof(List));
  	list->head = NULL;
  	list->size = 0;
  	return list;
}

void display(List * list) {
	Node * current = list->head;
  	if(list->head == NULL) 
    	return;
  	while(current->next != NULL){
    	printf("%d, ", current->data);
    	current = current->next;
  	}
  	printf("%d\n", current->data); 
}

int get(List * list, int index) {
    int i = 0;
    Node * current = list->head;
    if(list->head == NULL) 
        return (int) NULL;
    while(current->next != NULL && i != index){
        current = current->next;
        i++;
    }
    return current->data; 
}

void add(int data, List * list){
    Node * current = NULL;
  	if(list->head == NULL){
    	list->head = createnode(data);
  	}
  	else {
    	current = list->head; 
    	while (current->next!=NULL){
      		current = current->next;
    	}
    current->next = createnode(data);
  	}
  	list->size++;
}

void delete(int data, List * list){
	Node * current = list->head;            
  	Node * previous = current;           
  	while(current != NULL){           
    	if(current->data == data){      
      		previous->next = current->next;
      		if(current == list->head)
        		list->head = current->next;
      		free(current);
      	return;
    	}                               
    	previous = current;             
    	current = current->next;        
  	} 
  	list->size--;                                
}                                   

void reverse(List * list){
  	Node * reversed = NULL;
  	Node * current = list->head;
  	Node * temp = NULL;
  	while(current != NULL){
    	temp = current;
    	current = current->next;
    	temp->next = reversed;
    	reversed = temp;
  	}
  	list->head = reversed;
}

void destroy(List * list){
  	Node * current = list->head;
  	Node * next = current;
  	while(current != NULL){
    	next = current->next;
    	free(current);
    	current = next;
  	}
  	free(list);
}

long long int properDivisorSummation(long long int n) {
	int ans = 1L, i = 2L;
	for(; i < sqrt(n); i++)
		if(n % i == 0)
			ans += i + (n/i);
	return ans;
}

bool isAbundant(int number) {
	return number < properDivisorSummation(number);
}

List* getAbundantNumbers(int bound) {
	List * list = emptylist();
	int i = 1;
	for(; i <= bound; i++)
		if(isAbundant(i))
			add(i, list);
	return list;
}


int main(int argc, char const *argv[]) {
	List * list = getAbundantNumbers(BOUND);
    bool sieve[BOUND] = {false};
    int ans = 0;

    for(int i = 0; i <= list->size; i++)
        for(int j = i; j <= list->size; j++) {
            int a = get(list, i), b = get(list, j);
            printf("%d %d\n", a, b);
            if(a + b <= BOUND)
                sieve[a + b] = true;
            else
                break;
        }

    for(int i = 0; i < sizeof(sieve); i++)
        if(!sieve[i])
            ans += i;

    printf("%d\n", ans);
    return 0;
}