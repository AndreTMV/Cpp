#include <iostream>
using std::cout, std::cin;
struct node {
  int data;
  node *next;
};

void print(node *head) {
  if (head == NULL)
    return;                  // exit condition
  cout << head->data << " "; // first print the value in the node
  print(head->next);         // recursive call
}

void reversePrint(node *head) {
  if (head == NULL)
    return;
  reversePrint(head->next);
  cout << head->data << " ";
}

node *insert(node *head, int data) {
  node *temp = new node();
  temp->data = data;
  temp->next = NULL;
  if (head == NULL)
    head = temp;
  else {
    node *temp1 = head;
    while (temp1->next != NULL) {
      temp1 = temp1->next;
    }
    temp1->next = temp;
  }
  return head;
}

int main() {
  node *head = NULL; // local variable
  head = insert(head, 2);
  head = insert(head, 4);
  head = insert(head, 6);
  head = insert(head, 5);
  print(head);
  cout << "\n";
  reversePrint(head);
  cout << "\n";
  return 0;
}
// 1:58:17
