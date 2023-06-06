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
        if(!(isEmpty())){
            Node * t= new Node(val);
            t->setNext(head);
            head = t;
            cout<<head->getData()<<"\tInserted Succesfully \n";
        }
        else{
            head = new Node(val);
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

    int deleteLastElement()
    {
        Node * t= head->getNext();
        while(t != NULL)
        {
            t= t->getNext();
            head->getNext();
        }
        return head->getData();
        delete t;
        head->setNext(NULL);
    }

    void printAll()
    {
        while(head->getNext() != NULL)
        {
            cout<<head->getData()<<"\t";
            head = head->getNext();
        }
        cout<<"\n";
    }

};


class Queue
{
    private:
        LinkedList l;
        int size;
    public:
        Queue(){}
        Queue(int size)
        {
            setSize(size);
        }

        void setSize(int size = 10){
            this->size = size;
        }

        int getSize()
        {
            return size;
        }

        void enqueue(int val)
        {
            l.insertAtStart(val);
        }  

        int dequeue()
        {
            int x = l.deleteLastElement();
            return x;
        }        

        void printAll()
        {
            l.printAll();
        }
};
int main()
{
    Queue q ;
    q.setSize(10);
    cout<<q.getSize()<<endl;
    for(int i=0 ; i<10 ; i++)
    {
        q.enqueue(100 + i);
        cout<<"\n";
    }

    cout<<q.dequeue()<<"\n";

    q.enqueue(900);

    q.printAll();

}
