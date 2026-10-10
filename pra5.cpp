#include<iostream>
using namespace std;
#define size 5
int queue[size];
int f = -1 , r = -1;

void enqueue(int x)
{ 
    if(r == size-1) 
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        if(f == -1)
            f = 0;
        r++;
        queue[r] = x;
        cout<<x<<" is inserted into the queue"<<endl;
    }
}

void dequeue()
{ 
    if(f == -1 || f > r) // queue is empty
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<queue[f]<<" is removed from the queue"<<endl;
        f++;
        if(f > r) // reset the queue when all elements are dequeued
        {
            f = -1;
            r = -1;
        }
    }
}

void display()
{
    if(f == -1 || f > r)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue elements are: ";
        for(int i=f; i<=r; i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

void peek()
{
    if(f == -1 || f > r)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Front element of the queue is: "<<queue[f]<<endl;
    }
}