#include<iostream>
using namespace std;

class Stack
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

void push(int v)
{
        while(arr[i] != -999)
        {
            i++;
        }
        
        arr[i] = v;
            count++;
   
    cout<<"Entered value is :  "<<arr[i]<<"\n";
}

void pop()
{
    if(count > 0)
    {
    if(arr[count -1] != -999)
    {
        cout<<"The Poped Element is : "<<arr[count -1]<<endl;
    }
    arr[count -1 ] = -999;
    count--;
    }
    else
    {
        cout<<"stack is empty \n";
    }
        
}

void top()
{
    int i=0;
   while(arr[i] != -999)
   {
       i++;
   }
   cout<<"Top of the Stack Contains : "<<arr[i-1]<<"\n";
}

int total()
{
    return count;
}

};
int main()
{
    Stack q;
    q.initialize();
    q.push(2);
    q.push(1);
    q.push(7);
    q.push(4);
    q.push(9);
    q.push(12);
   // cout<<"Total Elements in queue : "<<q.total()<<"\n";
    q.top();
    q.pop();
    q.top();
    q.pop();
    q.pop();
    q.pop();
    q.top();
    q.pop();
    q.pop();
    q.pop();
}
