// You will be given  queries. In each query you will get a command. The command is of two types -

// You will be given  and  of a person who stood in a line of a ticket counter.
// You will be given only  which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print 
// Sample Input 0

// 5
// 0 rahim
// 0 karim
// 1
// 0 sakib
// 1
// Sample Output 0

// rahim
// karim
// Sample Input 1

// 8
// 1
// 0 embappe
// 0 neymar
// 1 
// 1
// 0 messi
// 1
// 1
// Sample Output 1

// Invalid
// embappe
// neymar
// messi
// Invalid
// Sample Input 2

// 6
// 0 embappe
// 0 embappe
// 1 
// 1
// 0 messi
// 1
// Sample Output 2

// embappe
// embappe
// messi
#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    queue<string> line;

    for (int i = 0; i < Q; i++) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            string name;
            cin >> name;
            line.push(name);
        } else if (cmd == 1) {
            if (line.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << line.front() << endl;
                line.pop();
            }
        }
    }

    return 0;
}
