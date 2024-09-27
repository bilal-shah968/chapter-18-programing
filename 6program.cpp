#include <iostream>

class Node
 {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList 
{
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    // Function to insert a new node at the end
    void insertEnd(int value)
     {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) 
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the linked list
    void display() const
     {
        Node* temp = head;
        while (temp != nullptr) 
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Function to delete a node by value
    void deleteValue(int value) 
    {
        if (head == nullptr) return;

        // Special case: if the node to be deleted is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Find the node to be deleted
        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr && current->data != value) {
            previous = current;
            current = current->next;
        }

        // If the value was not found
        if (current == nullptr) return;

        // Remove the node
        previous->next = current->next;
        delete current;
    }

    ~SinglyLinkedList() 
    {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    SinglyLinkedList list;

    // Insert some values
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);

    std::cout << "Linked list: ";
    list.display();

    // Delete a value
    list.deleteValue(20);
    std::cout << "After deleting 20: ";
    list.display();

    // Try deleting a non-existing value
    list.deleteValue(100);
    std::cout << "After trying to delete 100: ";
    list.display();

    return 0;
}
