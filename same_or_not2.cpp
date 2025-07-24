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

class my_queue {
public:
 
    void push(int val) {
      v.push_back(val);
    }

    void pop() {
       v.pop_front();
    }

    int front() {
        return v.front();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    my_stack st;
    my_queue q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }
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

