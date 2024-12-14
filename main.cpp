/*
struct node {
    int data;
    node* link;
};

struct slist {
    void append(int data);

    void print(const char* what);

    void clear();
    
    void remove(int data);

    node* head = nullptr;
    node* tail = nullptr;
    int count = 0;
};



void slist::append(int data) {
    node* n = new node();
    n->data = data;
    n->link = nullptr;
    if (head == nullptr) {
        head = n;
    }
    else {
        tail->link = n;
    }
    tail = n;
    ++count;
    cout << "Head's data=" << head->data << endl;
    cout << "Tail's data=" << tail->data << "\n";

}

void slist::clear() {
    node* c = head;
    while (c != nullptr) {
        node* link = c->link;
        delete c;
        c = link;
    }
    head = nullptr;
    tail = nullptr;
    count = 0;
}

void slist::print(const char* what) {
    cout << "--- " << what << " size = "<< count << "  ---\n";
    node* c = head;
    while (c!=nullptr) {
        cout << c->data << endl;
        c = c->link;
    }
}

void slist::remove(int data) {
    node* c = head;
    node* prev;
    if (c->data == data) {
        head = c->link;
        delete c;
    }
    else {
        while (c != nullptr) {
            if (c->data == data) {
                break;
            }
            prev = c;
            c = c->link;
        }
        if (c == nullptr) {
            cout << "data=" << data << " does not exist\n";
        }
        else {
            prev->link = c->link;
            delete c;
        }
    }
}

int main() {
    slist l;
   
    l.print("empty list");
    l.clear();
    l.print("Cleared empty list");
    l.append(1);
    l.print("after append(1)");
    l.append(2);
    l.print("after append(1,2)");
    l.append(42);
    l.print("after append(1,2,42)");
    l.clear();
    l.print("After clear");
    
    l.append(1); l.append(2); l.append(3); l.append(4); l.append(5);
    l.print("Append: (1, 2, 3, 4, 5) ");
    l.remove(5);
    l.print("Removed 5: ");
    
} */

#include <iostream>
#include "node.h"
#include "student.h"
using namespace std;

int main() {

    Student* student1 = new Student("Bob", 123456, 4.0);
    Student* student2 = new Student("John", 654321, 0.4);

    Node* node1 = new Node(student1);
    Node* node2 = new Node(student2);

    node1->setNext(node2);

    cout << "Node 1 Student: " << node1->getStudent() << endl;
    cout << node1->getStudent() << "If this value and the one above are the same, getStudent is working correctly. " << endl;
    cout << "Node 2 Student: " << node2->getStudent() << endl;

    if (node1->getNext() == node2) {
        cout << "Node 1 is linked to Node 2 correctly" << endl;
    } 
    else {
        cout << "Node 1 isn't linked to Node 2 correctl" << endl;
    }

    delete node1;
    delete node2;


    return 0;

}
