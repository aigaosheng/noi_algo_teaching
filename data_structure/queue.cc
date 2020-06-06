#include <queue>
#include <iostream>

using namespace std;

int main(int argv, char *args[]) {
    //priority_queue<int> sk;

    queue<int> sk;
    
    sk.push(1);
    sk.push(2);
    sk.push(3);
    cout<<"queue size "<<sk.size()<<endl;
    while(!sk.empty()) {
        //access the firstt value
        int x = sk.front();
        int y = x + 10;
        cout<<"x = "<<x<<" y = "<<y<<endl;
        //remove it after processing
        sk.pop();
    }
    return 1;
}
