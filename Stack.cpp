#include<iostream>
using namespace std;
class Node
{
    private:
        int data;
        Node * next;
    public:
        Node(){}
        Node(int data , Node *next = NULL)
        {
            setData(data);
            setNext(next);
        }
        void setData(int data )
        {
            this->data = data;
        }
        void setNext(Node * next)
        {
            this->next = next;
        }
        int getData()
        {
            return data;
        }
        Node *getNext()
        {
            return next;
        }
};  

class LinkedList
{
    private:
        Node * head;
    public:

    bool isEmpty()
    {
        if(head == NULL)
            return true ;

        return false;
    }

    void insertAtStart(int val)
    {
        if(isEmpty()){
            head = new Node(val);
            cout<<head->getData()<<"\tInserted Succesfully \n";
        }
        else{
            Node * t= new Node(val);
            t->setNext(head);
            head = t;
            cout<<head->getData()<<"\tInserted Succesfully \n";
        }
    }

    void insertAtLast(int val)
    {
        Node *t = new Node(val);
        if (isEmpty())
        {
            head = t;
        }
        else
        {
            Node *t1 = head;
            while (t1->getNext() != NULL)
            {
                t1 = t1->getNext();
            }
            t1->setData(val);
            cout << t1->getData() <<"\t Inserted Successfully \n";
        }
    }

    void getFirstElement()
    {
        cout<<"First Element is :  "<<head->getData()<<"\n";
    }

    void getLastElement()
    {
        while(head->getNext() != NULL)
        {
            head = head->getNext();
        }
        cout<<"The Last Added Element is : "<<head->getData()<<"\n"; 
    }

    void countElements()
    {
        int count =0;
        while(head->getNext() != NULL)
        {
            head = head->getNext();
            count++;
        }
        cout<<count;
    }

    void deleteFirstElement()
    {
        Node *t = head->getNext();
        head->setNext(NULL);
        head = t;
    }

    void deleteLastElement()
    {
        Node * t= head->getNext();
        while(t != NULL)
        {
            t= t->getNext();
            head->getNext();
        }
        head->setNext(NULL);
    }

    void printAll()
    {
        if(!isEmpty())
        {
            Node * t = head;
            while (t != NULL)
            {
                cout<<t->getData()<<" ";
                t = t->getNext();
            }
        }
    }

};


class Stack
{
    private:
        LinkedList l ;
        int size;
    public:

    Stack(){}
    Stack(int size){
        setSize(size);
    }

    void setSize(int size = 5)
    {
        this->size = size;
    }

    int getSize()
    {
        return size;
    }

    void push(int val)
    {
        if(size > 0 )
        {
            l.insertAtLast(val);
            size--;
        }
        else{
            cout<<"Stack is Full \n";
        }
    }

    void top()
    {
        l.getLastElement();
        cout<<"\n";
    }

    void pop()
    {
        if(!(l.isEmpty()))
            {
                cout<<"Top of stack to remove \n";
                l.getFirstElement();
                l.deleteFirstElement();
            }
            else{
                cout<<"The Stack is Empty and nothing to pop out.";
            }
    }

};

int main()
{
    Stack s;
    s.setSize(5);
    cout<<s.getSize()<<"\n";
    s.push(99);
    s.push(999);
    s.push(9999);
    s.push(112);
    s.push(1122);
    s.push(0000);
    s.top();
    s.pop();
}
