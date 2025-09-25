#include <iostream>
using namespace std;
#define SIZE 5

class Queue{
    int arr[SIZE];
    int front, rear;
    
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int value){
        if (rear == SIZE-1){
            cout<<"Queue Overflow!\n";
            return;
        }
        if (front == -1)front = 0;
        arr[++rear]=value;
        cout<<value<<" Inserted into queue.\n";
    }
    
    void dequeue(){
        if(front==-1||front>rear){
            cout<<"Queue Underflow!\n";
            return;
        }
        cout<<arr[front]<<" removed from queue.\n";
        front++;
    }
    
    void display(){
        if(front==-1||front>rear){
            cout<<"Queue is empty.\n";
            return;
        }
        cout<<"Queue elements: \n";
        for(int i = front; i<= rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};



int main() {
    
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    
    q.dequeue();
    q.display();
    
    q.enqueue(40);
    q.display();
    
    
    return 0;
}

/*
OUTPUT
10 Inserted into queue.
20 Inserted into queue.
30 Inserted into queue.
Queue elements: 
10 20 30 
10 removed from queue.
Queue elements: 
20 30 
40 Inserted into queue.
Queue elements: 
20 30 40 
*/
