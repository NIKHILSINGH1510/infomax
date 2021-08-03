#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
};

class queue{
    Node* start;
    public:
    queue(){
        start= NULL;
    }

    void enqueue(int);
    void dequeue();
    void peek();
};

void queue::enqueue(int num)
{       Node* p;
    Node* newnode = new Node();
    newnode->data= num;
    newnode->link=NULL;

    if(start==NULL){
        start = newnode;
    }

    else{
        p=start;
        while(p!=NULL)
        {
            p=p->link;
        }
        p=newnode;

    }
}

void queue::dequeue()
{
    Node* p;
    if(start==NULL)
    {
        cout<<"empty"<<endl;
    }
    else{
        p=start;
        start=start->link;
        delete(p);
    }
}

void queue::peek()
{   if(start!= NULL)
    cout<<start->data<<endl;

    else{
        cout<<"empty"<<endl;
    }
}



int main()
{
    int n,num;
    queue obj;

    do{
        cout<<"enter 1 to enqueue"<<endl;
        cout<<"enter 2 to dequeue"<<endl;
        cout<<"enter 3 to peek"<<endl;
        cout<<"enter 0 to exit"<<endl;
        cin>>n;

        switch(n)
        {
            case 1: cout<<"enter the number to be pushed"<<endl;
                    cin>>num;
                    obj.enqueue(num);
                    break;
            case 2: obj.dequeue();
                    break;
            case 3: obj.peek();
                break;
        }
    }
    while(n!=0);

    return 0;
}