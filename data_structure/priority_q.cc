#include <queue>
#include <iostream>
#include <string>

using namespace std;

int main(int argv, char *args[]) {
    priority_queue<int> sk;

    sk.push(1);
    sk.push(2);
    sk.push(3);
    cout<<"queue size "<<sk.size()<<endl;
    while(!sk.empty()) {
        //access the firstt value
        int x = sk.top();
        int y = x + 10;
        cout<<"x = "<<x<<" y = "<<y<<endl;
        //remove it after processing
        sk.pop();
    }

    priority_queue<string> sk2;
    sk2.push("a");
    sk2.push(string("b"));
    sk2.push(string("c"));
    sk2.push(string("d"));
    cout<<"queue size "<<sk2.size()<<endl;
    while(!sk2.empty()){
        string s = sk2.top();
        cout<<"Value = "<<s<<endl;
        sk2.pop();
    }
    
    return 1;
}
