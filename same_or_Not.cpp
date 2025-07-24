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

// N0

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; ++i) {
        int val;
        cin >> val;
        q.push(val);
    }
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }
    bool same = true;
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
