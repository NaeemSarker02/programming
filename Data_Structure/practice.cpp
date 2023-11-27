#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class LinkedList
{
public:
  Node *head;
  LinkedList()
  {
    head = NULL;
  }
  void insertAtHead(int val)
  {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }

  // insert at End or (queue : push back)
  void insertAtEnd(int value)
  {
    Node *newNode = new Node(value);
    if (head == NULL)
    {
      head = newNode;
    }
    else
    { //-----travarsa kore kore end e jabo-----
      Node *temp = head;
      while (temp->next != NULL)
      {
        temp = temp->next; // next node e jabo
      }
      temp->next = newNode; // end node e NULL peye gesi, tai ekn new node er sathe link kore dibo
    }
  }

  // delete at Head (stack : pop front)
  void deleteAtHead()
  {
    if (head == NULL)
    {
      cout << "list is empty.cann't delete..";
    }
    Node *temp = head;
    head = temp->next; // head update: head banaise oi temp node er next re(next node)
    delete temp;
  }

  // delete at End or (pop back)
  void deleteAtEnd()
  {
    Node *temp = head;
    while (temp->next->next != NULL) // NULL na paoya porjonto travers korte thakbe(NULL er ek node age point kora thakbe)
    {
      temp = temp->next;
    }
    delete temp->next; // last node delete kora sesh
    temp->next = NULL; // ekn current last node er next e null hobe, cz porer npde er ad nai
  }

  // specific insert
  void push_at(int val, int posi)
  {
    Node *newNode = new Node(val);
    newNode->data = val;
    newNode->next = NULL;
    
    Node *temp = head;
    for (int i = 1; i < posi - 1 && temp != NULL; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next; // newNode(nth position) er next e hobe temp er next (n+1)th position.
    temp->next = newNode;       // temp er next link hobe newNode er sathe ( n th number position).
  }

  // specific delete
  void pop_at(int posi)
  {
    Node *temp = head;
    for (int i = 1; i < posi - 1; i++) // target node (n th node) er ager node ber kora
    {
      temp = temp->next;
    }
    if (temp != NULL && temp->next != NULL) // list jodi empty na hoy, tahole
    {
      Node *deleteMe = temp->next; // unlink : new ekta node khullam (deleteMe),ebar deleteMe e temp
                                   // er next rakhlam (target or (nth))node

      temp->next = temp->next->next; // new link: temp node(n-1) er sathe (n+1) er link korlam
      delete deleteMe;               // terget(nth) node ta delete kore dilam
    }
  }

  void display()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL";
  }
};
int main()
{
  LinkedList list;
  // assign for make a linked list (insert at Head and End)
  list.insertAtHead(3);
  list.insertAtHead(2);
  list.insertAtHead(1);

  list.insertAtEnd(4);
  list.insertAtEnd(5);
  list.insertAtEnd(6);

  cout << "orginal Linked List : ";
  list.display(); // orginal display

  // assign for delete at the head
  list.deleteAtHead(); // calling deletion part.(mast be delete function ta orginal display er pore call korte hobe)
  cout << "\n\ndeleteing at head: ";
  list.display();

  // assign for delete at the End
  list.deleteAtEnd();
  cout << "\n\nDelete at End : ";
  list.display();

  // assign for inserting (pushing) at any position
  list.push_at(100, 2);
  list.push_at(500, 3);
  cout << "\n\nspecific insert : ";
  list.display();

  // assign for deleting (poping) at any position
  list.pop_at(2);
  list.pop_at(3);
  cout << "\n\nspecific delete : ";
  list.display();
}