//element.h

struct Node {
  int data;
  struct Node* next;
};

int isEmpty (struct Node* element);
int size (struct Node* element);
void insertElementEnd (struct Node** headRef, int newData);
void printList (struct Node* element);
void push(struct Node** headRef, int newData);
void deleteNode(struct Node **headRef, int key);

int isEmpty (struct Node* element){
  if (element != NULL)
    return printf("lista não vazia\n");
  else 
    return printf("lista vazia\n");
}

int size (struct Node* element){
  int count = 0;
	while (element != NULL){
		count = count + 1;
		element = element->next;
	}
	return printf("%d\n", count);
}

void printList(struct Node* element){
	while (element != NULL){
		printf ("%d\n", element->data);
		element = element->next;
	}
}

void insertElementEnd (struct Node** headRef, int newData){
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

void push(struct Node** headRef, int newData){
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = newData;
  newNode->next = (*headRef);
  (*headRef) = newNode;
}

void deleteNode(struct Node **headRef, int key){
  struct Node* temp = *headRef, *prev;

  if (temp != NULL && temp->data ==key){
    *headRef = temp->next;
    free(temp);
    return;
  }
