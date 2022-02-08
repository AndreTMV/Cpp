#include <iostream>
using std::cout, std::cin;
struct node {
  int data;
  node *next;
};

node *head;

void insert(int data) {
  node *temp1 = new node();
  temp1->data = data;
  temp1->next = NULL;
  if (head == NULL) {
    head = temp1;
  } else {
    node *lastNode = head;
    while (lastNode->next != NULL) {
      lastNode = lastNode->next;
    }
    lastNode->next = temp1;
  }
};

void print() {
  node *temp1 = head;
  while (temp1 != NULL) {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
  cout << "\n";
};

void del(int n) {
  node *temp1 = head;
  if (n == 1) {
    head = temp1->next;
    delete temp1;
    return;
  }
  for (int i = 0; i < n - 2; ++i) {
    temp1 = temp1->next;
  }
  // temp1 points to (n-1)th Node
  node *temp2 = temp1->next; // nth Node
  temp1->next = temp2->next; // (n+1)th Node
  delete temp2;              // delete temp2
};

int main() {
  int n = 0;
  head = NULL;
  insert(2);
  insert(4);
  insert(6);
  insert(5); // List: 2,4,6,5
  print();
  cout << "Inserte una posicion\n";
  cin >> n;
  del(n);
  print();
  return 0;
}
