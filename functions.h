#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23091_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23091_FUNCTIONS_H
class Node {
public:
    int data;
    Node* next;

    Node(int dataValue);
    ~Node();

    void setNext(Node* nextNode);
    Node* getNext();
    void setData(int dataValue);
    int getData();
};

class Stack {
private:
    Node* top;
    int count;

public:
    Stack();
    ~Stack();

    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};

class Queue {
private:
    Node* front;
    Node* rear;
    int count;

public:
    Queue();
    ~Queue();
    void clear();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    void printQueue();
};





#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23091_FUNCTIONS_H
