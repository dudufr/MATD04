//element.h

typedef struct node {
	int data;
	struct node* next;
};
  
int isEmpty (struct node* element){
	if (element != NULL)
		return 0;
	else
		return 1;
	};

int size(struct node* element){
	int count = 0;
	while (element->next != NULL){
		count = count + 1;
		element = element->next
	};
	return count;
};

void insertElement(struct node* newElement, int newData){
	struct node* newElement = (struct node*) malloc(sifeof(struct node));
	if (element->next == NULL){
	 	element->next = newElement;
		newElement->data = newData;
	}
}

void printList(struct node* element){
	while (element->next != NULL){
		printf ("%d", element->data);
		element = element->next;
	}
}

  return 0;
}
