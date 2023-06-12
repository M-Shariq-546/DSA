#include<iostream>
using namespace std;

class Queue
{
    private:
    int size = 10;
    int i;
int arr[10];
int count = 0;
public:
void initialize()
{
    for(int i=0 ; i<size ;i++){
        arr[i] = -999;}
}

void enqueue(int v)
{
        while(arr[i] != -999)
        {
            i++;
        }
        
        arr[i] = v;
            count++;
   
    cout<<"Entered value is :  "<<arr[i]<<"\n";
}

void dequeue()
{
    if(arr[0] != -999)
    {
        cout<<"The Removed Element is : "<<arr[0]<<endl;
    }
    for(int i=1 ; i<size ; i++)
        arr[i -1] = arr[i];
}

void front()
{
   if(arr[0] != -999)
    cout<<"The Front End of Queue Contains : "<<arr[0]<<" currently \n";
}

int total()
{
    return count;
}

void Rare()
{
    cout<<"The Rare End of Queue Contains :  "<<arr[count - 1]<<" currently \n";
}

};
int main()
{
    Queue q;
    q.initialize();
    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(9);
    q.enqueue(12);
   // cout<<"Total Elements in queue : "<<q.total()<<"\n";
    q.front();
    q.Rare();
    q.dequeue();
    q.front();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.front();
}
