#include "functions.h"
#include <iostream>
using namespace std;
int main() {
    Stack stack;
    Queue queue;
    int choice, data;

    while (true) {
        cout << "\n1. Push to Stack" << endl;
        cout << "2. Pop from Stack" << endl;
        cout << "3. Peek at Stack" << endl;
        cout << "4. Print Stack" << endl;
        cout << "5. Stack Size" << endl;
        cout << "6. Enqueue to Queue" << endl;
        cout << "7. Dequeue from Queue" << endl;
        cout << "8. Print Queue" << endl;
        cout << "9. Queue Size" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to push: ";
                cin >> data;
                stack.push(data);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "stack Top: " << stack.peek() << endl;
                break;
            case 4:
                cout << "Stack values: ";
                stack.printStack();
                break;
            case 5:
                cout << "Stack size: " << stack.size() << endl;
                break;
            case 6:
                cout << "Enter data to enqueue: ";
                cin >> data;
                queue.enqueue(data);
                break;
            case 7:
                queue.dequeue();
                break;
            case 8:
                cout << "Queue values: ";
                queue.printQueue();
                break;
            case 9:
                cout << "Queue size: " << queue.size() << endl;
                break;
            case 10:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }
}