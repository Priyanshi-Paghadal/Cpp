#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() : head(nullptr) {}

    void addNode(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void removeNode(int val) {
        if (head == nullptr) return;
        if (head->value == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next != nullptr && current->next->value != val) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    void addNodeAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
};

int main() {
    SinglyLinkedList list;
    int choice;
    do {
        cout << "Press 1 for => Add 5 nodes to the linked list." << endl;
        cout << "Press 2 for => Display the linked list elements." << endl;
        cout << "Press 3 for => Remove the node with value 33." << endl;
        cout << "Press 4 for => Add a new node with value 6 at the beginning of the linked list." << endl;
        cout << "Press 0 for => Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                list.addNode(11);
                list.addNode(22);
                list.addNode(33);
                list.addNode(44);
                list.addNode(55);
                break;
            case 2:
                list.displayList();
                break;
            case 3:
                list.removeNode(33);
                break;
            case 4:
                list.addNodeAtBeginning(6);
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
