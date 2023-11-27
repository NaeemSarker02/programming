#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *pre;
    Node *next;

    Node(int val)
    {
        data = val;
        pre = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{

public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void InsertAtHead(int val)
    {

        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode; // head jodi faka hoy newNode tai head hobe, newNode tai tail hobe
            tail = newNode;
        }
        newNode->next = head; // newNode er next e head jabe(porer node),
        head->pre = newNode;  // head er prev er newNode jabe
        head = newNode;       // newNode ta head hoye jabe
    }
    void insertatend(int val)
    {
        Node *newNode = new Node(val);

        if (tail == NULL)
        {
            head = newNode; // tail jodi faka hoy newNode tai head hobe, newNode tai tail hobe
            tail = newNode;
        }
        newNode->pre = tail;  // newNode er prev e head jabe(porer node),
        tail->next = newNode; // head er prev er newNode jabe
        tail = newNode;       // newNode ta tail hoye jabe
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            cout << "\nList is empty, nothing to delete";
        }
        Node *temp = head; // temp e old head rakhlam
        head = head->next; // new head hobe old head er next (next node)
        delete temp;

        if (head)
        {
            head->pre = NULL;
        }
    }

    void deleteAtTail()
    {
        if (tail == NULL)
        {
            cout << "\nList is empty, nothing to delete";
        }

        Node *temp = tail; // temp e old tail rakhlam
        tail = tail->pre;  // new_tail hobe old_tail er previous
        tail->next = NULL; // nrw_tail er next hobe NULL
        delete temp;
    }

    // Function to insert a new node at a given position
    void insertNodeAtPosition(int val, int posi)
    {
        Node *newNode = new Node(val);
        {
            Node *temp = head;
            for (int i = 1; i < posi - 1 && temp != nullptr; i++)
            {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->pre = temp;
        }
    }

    // Function to delete a node at a given position
    void deleteNodeAtPosition(int posi)
    {
        Node *temp = head;
        for (int i = 1; i < posi - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp != nullptr)
        {
            temp->pre->next = temp->next;
            if (temp->next != nullptr)
            {
                temp->next->pre = temp->pre;
            }
            delete temp;
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
    DoublyLinkedList list;
    list.InsertAtHead(30);
    list.InsertAtHead(20);
    list.InsertAtHead(10);
    list.insertatend(40);
    list.insertatend(50);
    list.insertatend(60);
    list.insertNodeAtPosition(100, 3);
    list.deleteNodeAtPosition(5);

    cout << "Orginal Linked LIst: ";
    list.display();

    list.deleteAtHead();
    cout << "\ndelete at head : ";
    list.display();

    list.deleteAtTail();
    cout << "\ndelete at tail : ";
    list.display();
}
