// intial rear and front is 0 ;
//push the element 
/*

Push(X){
 //PUSH TO ADD ELEMENT AT REAR END 
 Arr[rear] = X;
 rear ++;


}

Pop(){ // pop se front me pop hota 
int x = front 
front ++ increment 

return arr[x]; 
}
front == rear ;
this means no element between  rear  and front
 return -1 ;


*/ 


// class banaya uske andar private sb me hi public likhna  and int main me class name and object q then to access
// q.public memeber access


#include <iostream>
#include <queue>  // Include queue header
using namespace std;

class MyQueue {
private:
    int arr[1000]; // Array to store queue elements
    int front, rear; // Front and rear pointers

public:
    MyQueue() { // Constructor to initialize queue   , constructor always class name . is called default constructor .


        front = 0;
        rear = 0;
    }

    /*
    // Function to push an element x in a queue.
void MyQueue ::push(int x) {
    // Your Code
    
    if (rear == 100005) return; 
    if (front == rear) {
            front = 0;
            rear = 0;
        }
    arr[rear++] = x ;    
}


int MyQueue ::pop() {
    // Your Code
    
    if (front == rear) {
            return -1;
        }
        return arr[front++];
    
}
    */

    void push(int x) { // Enqueue operation
        arr[rear] = x;
        rear++;
    }

    int pop() { // Dequeue operation
        if (rear == front) {
            return -1; // Queue is empty
        }
        int x = arr[front];
        front++;
        return x;
    }
};

int main() {
    MyQueue q; // Declare queue object

    q.push(10); //object . function call

    q.push(20);
    q.push(30);

    cout << "Popped: " << q.pop() << endl; // Output: 10
    cout << "Popped: " << q.pop() << endl; // Output: 20

    return 0;
}
