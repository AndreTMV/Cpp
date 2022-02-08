#include <iostream>
using std::cout, std::cin, std::endl;

struct node {
  int data;
  node *next;
};

node *insert(node **head, int x) {
  node *temp = new node();
  temp->data = x;
  temp->next = *head;
  *head = temp;
  return *head;
}

void print(node *head) {
  cout << "list is: ";
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << "\n";
}

int main() {
  node *head = NULL;
  int n = 0, x = 0;
  cout << "How many numbers?\n";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Enter the number \n";
    cin >> x;
    insert(&head, x);
    print(head);
  }
  return 0;
}
// 1:15:52
