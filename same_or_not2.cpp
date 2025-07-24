// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.
// Sample Input 0

// 5 5
// 10 20 30 40 50
// 50 40 30 20 10
// Sample Output 0

// YES
// Sample Input 1

// 4 4
// 10 20 30 40
// 10 20 30 40
// Sample Output 1

// NO
// Sample Input 2

// 5 4
// 1 2 3 4 5
// 5 4 3 2
// Sample Output 2

// NO
#include <bits/stdc++.h>
using namespace std;

// Custom Stack using vector
class my_stack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (!v.empty()) v.pop_back();
    }

    int top() {
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }
};

// Node for Queue
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Custom Queue using linked list
class my_queue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        if (head == NULL) return;
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) tail = NULL;
    }

    int front() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    my_stack st;
    my_queue q;

    // Input stack values
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    // Input queue values
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    // If sizes differ, they cannot be the same
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    // Compare stack pop with queue front
    bool isSame = true;
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (isSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


