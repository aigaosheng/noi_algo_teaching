#include <stack>
#include <iostream>

using namespace std;

int main(int argv, char *args[]) {
    stack<int> sk;

    sk.push(1);
    sk.push(2);
    sk.push(3);
    cout<<"stack size "<<sk.size()<<endl;
    while(!sk.empty()) {
        //access the last/top value
        int x = sk.top();
        int y = x + 10;
        cout<<"x = "<<x<<" y = "<<y<<endl;
        //remove it after processing
        sk.pop(); 
    }
    return 1;
}
