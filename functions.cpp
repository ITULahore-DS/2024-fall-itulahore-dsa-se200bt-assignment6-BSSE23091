#include "functions.h"
#include <iostream>
using namespace std;

Node::Node(int datah)  {
//    constructor
      data=datah;
      next= nullptr;
}

Node::~Node() {
    //destructor no implementation cuz no dma made
}

void Node::setNext(Node* nextNode) {
    //setter
    next = nextNode;
}

Node* Node::getNext() {
    //getter
    return next;
}

void Node::setData(int datah) {
//    setter
    data = datah;
}

int Node::getData() {
    return data;
//    getter
}

Stack::Stack() {
//    constructor
    top = nullptr;
    count = 0;
}

Stack::~Stack() {
//    destructor
    clear();
}

bool Stack::isEmpty() {
//    condition to check empty stack
    return top == nullptr;
}

void Stack::push(int data) {
//    entering data into stack
    Node* newNode = new Node(data);
    newNode->setNext(top);
    top = newNode;
    count++;
}

void Stack::pop() {
//    removing data from stack
    if (isEmpty()) {
        cout << "Stack is empty.OH NO!!" << endl;
        return;
    }
    Node* temp = top;
    top = top->getNext();
    delete temp;
    count--;
}

int Stack::peek() {
//    return data at top node
    if (isEmpty()) {
        cout << "Stack is empty.OH NO!!" << endl;
        return -1;
    }
    return top->getData();
}

int Stack::size() {
    return count;
}

void Stack::clear() {
//    emptying stack
    while (!isEmpty()) {
        pop();
        cout << "stack cleared successfully " << endl;
    }
}

void Stack::printStack() {
    Node* temp = top;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}


Queue::Queue() {
//    constructor
    front = nullptr;
    rear = nullptr;
    count = 0;
}

Queue::~Queue() {
//    destructor
    clear();
}

bool Queue::isEmpty() {
//    condition to check queue empty
    return front == nullptr;
}

void Queue::enqueue(int data) {
//    adding data into queue
    Node* newNode = new Node(data);
    if (rear != nullptr) {
        rear->setNext(newNode);
    }
    rear = newNode;
    if (front == nullptr) {
        front = rear;
    }
    count++;
}

void Queue::dequeue() {
//    removing data from queue
    if (isEmpty()) {
        cout << "Queue is empty."<< endl;
        return;
    }
    Node* temp = front;
    front = front->getNext();
    if (front == nullptr) {
        rear = nullptr;
    }
    delete temp;
    count--;
}

int Queue::size() {
    return count;
}

void Queue::printQueue() {
//    printing queue values
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}

void Queue::clear() {
//    removing all data from queue
    while (!isEmpty()) {
        dequeue();
        cout << "queue cleared successfully " << endl;
    }
}

