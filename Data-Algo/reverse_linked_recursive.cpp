#include <iostream>
using std::cout, std::cin;
struct node {
  int data;
  node *next;
};

node *head;

void reverse(node *p) {
  if (p->next == NULL) {
    head = p;
    return;
  }
  reverse(p->next);
  node *q = p->next;
  q->next = p;
  p->next = NULL;
  // p->next->next = p; -> hace lo mismo que las ultimas 3 lineas de esta
  // funcion
}

int main() { return 0; }
