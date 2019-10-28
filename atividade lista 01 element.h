//element.h

struct Node {
  int data;
  struct Node* next;
};

int isEmpty (struct Node* element);
int size (struct Node* element);
void insertElement (struct Node* element, int newData);
void printList (struct Node* element);

int isEmpty (struct Node* element){
  if (element != NULL)
    return printf("lista não vazia");
  else 
    return printf("lista vazia");
}

int size (struct Node* element){
  int count = 1;
	while (element->next != NULL){
		count = count + 1;
		element = element->next;
	}
	return count;
}

void printList(struct Node* element){
	while (element->next != NULL){
		printf ("%d", element->data);
		element = element->next;
	}
}

void insertElement(struct Node* element, int newData){
  struct Node* newElement = (struct Node*)malloc(sizeof (struct Node));
	if (element->next == NULL){
	 	element->next = newElement;
		newElement->data = newData;
	}
}
