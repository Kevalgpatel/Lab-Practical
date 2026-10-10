// Practical 1 : Write a program to create an array and demonstrate insertion, deletion, traversal, and search operations.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Printed Elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<i<<"th Element = "<<a[i]<<endl;
    }
    cout<<endl<<"============================================================="<<endl<<endl;
    
    int pos , value;
    cout<<"Where TO Add Another Number In Array : ";
    cin>>pos;
    
    cout<<"Which Value Add In The Array : ";
    cin>>value;
    
    for(int i=n; i>=pos; i--)
    {
        a[i] = a[i-1];
    }
    
    a[pos-1] = value;
    n++;
    
    cout<<"After Insertation : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl<<"============================================================="<<endl<<endl;
    
    int place;
    cout<<"Which Position Element Delete In Array : ";
    cin>>place;
    
    for(int i=place-1; i<n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    
    cout<<"After Deletation : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl<<"============================================================="<<endl<<endl;
    
    int key,found = 0;
    cout<<"Enter The Number To Search : ";
    cin>>key;
    
    for(int i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            cout<<"Element Found At Position "<<i;
            found = 1;
            break;
        }
    }
    
    if( found == 0)
    {
        cout<<"Element Not Found...";
    }
    
    cout<<endl<<endl<<"=============================================================";
    return 0;
}