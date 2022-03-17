#include <iostream>
using namespace std;

struct Node { 
  int data; 
  Node *next,*prev; 
};

class LinkedList
{
    Node* head;

  public:
    LinkedList()
    {
      head = NULL;
    }

    void insert(int val)
    {
      Node* new_node = new Node;
      new_node->data = val;
      new_node->next = NULL;
      new_node->prev = NULL;

      if (head == NULL)
        head = new_node;
      else
      {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
      }
    }


    void display()
    {
      Node* temp = head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }
};

int main() {
  
  LinkedList l;
  l.insert(1);
  l.insert(2);
  l.insert(3);
  cout << "Current Linked List: ";
  l.display();
}
