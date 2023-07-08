#include <bits/stdc++.h>

using namespace std;
class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, string st) {
    Node* newnode = new Node(st);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string st;

    for (int i = 0; i < n; i++) {
        cin >> st;
        insert_tail(head, tail, st);
    }

    print_list(head);

    return 0;
}