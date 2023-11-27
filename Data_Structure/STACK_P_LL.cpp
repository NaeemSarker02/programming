#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class stackk
{
public:
    node *head;
    stackk()
    {
        head = NULL;
    }

    void push(int val)  //insert at head
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp;
    }

    void pop()  // delete at head
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "list empty";
        }
        head = temp->next;
        delete temp;
    }

    void top()  // print the top value
    {
        node *temp = head;
        while (head != NULL)
        {
            cout << "Top:" << head->data << endl;
            break;
        }
    }

    void IsEmpty()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "The stack is empty" << endl;
        }
        else
        {
            cout << "The stack is full" << endl;
        }
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    stackk s;
    s.push(4);
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(2);

    s.pop();
    s.pop();

    s.push(7);

    s.top();

    s.IsEmpty();

    s.display();
}
