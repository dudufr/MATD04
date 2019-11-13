//queue.h

typedef struct queue Queue;

struct Node{
  int data;
  struct Node *next;
};

struct queue{
  struct Node *head;
  struct Node *tail;
};

Queue* newQueue();
void freeQueue(Queue *fi);
int size(Queue *fi);
void isEmpty (Queue *fi);
int put(Queue *fi, int newData);
int get(Queue *fi);
int consultaFila(Queue *fi, int data);


Queue* newQueue (){
  Queue *fi = (Queue*)malloc(sizeof(Queue));
  if(fi != NULL){
    fi->tail = NULL;
    fi->head = NULL;
  }
  return fi;
}

void freeQueue(Queue *fi){
  if(fi != NULL){
    struct Node *no;
    while (fi->head != NULL){
      no = fi->head;
      fi->head = fi->head->next;
      free(no);
    }
    free(fi);
  }
}

int size(Queue *fi){
  if(fi == NULL) return 0;
  int count = 0;
  struct Node *no = fi->head;
  while(no != NULL){
    count++;
    no = no->next;
  }
  return printf("\nA lista possui %d elementos\n ", count);
}

void isEmpty (Queue *fi){
  if(fi == NULL){
    printf("fila esta vazia\n");
  }
  if(fi->head == NULL){
    printf("fila esta vazia\n");
  }
  else{
    printf("fila nao esta vazia\n");
  }
}

int put(Queue *fi, int newData){
  if (fi == NULL) return 0;

  struct Node *no = (struct Node*)malloc(sizeof(struct Node));

  if (no == NULL) return 0;

  no->data = newData;
  no->next = NULL;

  if (fi->tail == NULL){
    fi->head = no;
  }
  else{
    fi->tail->next = no;
  }

  fi->tail = no;

  return 1;
}

int get(Queue *fi){
  if (fi == NULL) return 0;
  if (fi->head == NULL) return 0;

  struct Node *no = fi->head;
  fi->head = fi->head->next;

  if (fi->head == NULL){
    fi->tail = NULL;
  }

  free(no);

  return 1;
}
