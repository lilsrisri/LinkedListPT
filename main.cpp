#include <iostream>


using namespace std;

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
    /*
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
    */
    l.append(1); l.append(2); l.append(3); l.append(4); l.append(5);
    l.print("Append: (1, 2, 3, 4, 5) ");
    l.remove(5);
    l.print("Removed 5: ");
    
}
