
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insert(int x) {
        Node* p = new Node(x);

        if (head == NULL) {
            head = p;
        }
        else {
            Node* q = head;

            while (q->next != NULL) {
                q = q->next;
            }

            q->next = p;
            p->prev = q;
        }
    }

    void remove(int x) {
        Node* p = head;

        if (head == NULL) {
            return;
        }

        while (p != NULL && p->data != x) {
            p = p->next;
        }

        if (p == NULL) {
            return;
        }

        if (p == head) {
            head = head->next;

            if (head != NULL) {
                head->prev = NULL;
            }
        }
        else {
            p->prev->next = p->next;

            if (p->next != NULL) {
                p->next->prev = p->prev;
            }
        }

        delete p;
    }

    void display() {
        Node* q = head;

        while (q != NULL) {
            cout << q->data;

            if (q->next != NULL) {
                cout << " <-> ";
            }

            q = q->next;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    cout << "Initial List: ";
    list.display();

    list.remove(20);
    list.remove(99);

    
    cout << "After Removal: ";
    list.display();

    return 0;
}
/*
 Output:
 cd "d:\Atharva Kale\" && g++ Doubly_linkedlist.cpp -o Doubly_linkedlist && "d:\Atharva Kale\"Doubly_linkedlist
Initial List: 10 <-> 20 <-> 30 <-> 40 <-> 50
After Removal: 10 <-> 30 <-> 40 <-> 50



*/