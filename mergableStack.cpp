class Node{
  Node* next;
  int data;
};

class mystack{
  Node* head;
  Node* tail;
  
  mystack()
  {
    head=NULL;
    tail=NUKK;
  }
};

void push(int x,mystack *ms)
{
  Node* temp;
  temp->data=x;
  
  temp->next=ms->head;
  
  if(head == NULL)
  {
    ms->tail=temp;
  }
  ms->head=temp;
}

int pop(mystack* ms)
{
  if(ms->head == NULL)
  {
    return -1;
  }
  
  Node* temp=ms->head;
  ms->head=ms->head->next;
  int x=temp->data;
  delete temp;
  return x;
}
void merge(mystack* a,mystack* b)
{
  if(a->head == NULL)
  {
    a->head=b->head;
    a->tail=b->tail;
  }
  
  a->tail->next-b->head;
  a->tail=b->tail;
}
