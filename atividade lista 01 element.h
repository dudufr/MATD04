//element.h

struct Node {
  int data;
  struct Node* next;
};

int isEmpty (struct Node* element);
int size (struct Node* element);
void insertElementEnd (struct Node* headRef, int newData);
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
		printf ("%d\n", element->data);
		element = element->next;
	}
}

void insertElementEnd (struct Node* headRef, int newData){
  	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  	struct Node* last = headRef;
  	newNode->data = newData;
  	newNode->next = NULL;
  	
  	if (headRef == NULL){
  	    headRef = newNode;
  	    return;
  	}
  	
  	while (last->next != NULL)
  	    last = last->next;
  	    
  	last->next = newNode;
  	return;
}
