#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int v)
    {
        data = v;
        next = nullptr;
    }
};
class Queue
{
public:
    node *head;
    Queue()
    {
        head = nullptr;
    }

    // insert at End or (push back)
    void push(int value)
    {
        node *newNode = new node(value);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        { //-----travarsa kore kore end e jabo-----
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next; // next node e jabo
            }
            temp->next = newNode; // end node e NULL peye gesi, tai ekn new node er sathe link kore dibo
                }
    }

    void pop() // delete at Head (queue : pop front)
    {
        node *temp = head;
        if (head == NULL)
        {
            cout<<"Queue is empty";
        }
        head = temp->next;
        delete temp;
    }

    void top()
    {
        node *temp = head;
        while (head != NULL)
        {
            cout << "Top:" << head->data << endl;
          break;
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
    Queue q;
    q.push(3);
    q.push(5);
    q.push(2);
    q.push(9);

    q.pop();

    q.display();
    q.top();
}
