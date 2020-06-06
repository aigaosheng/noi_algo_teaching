#include <map>
#include <string>
#include <iostream>
#include <exception>

using namespace std;

int main(int argv, char *args[]) {
    map<int, string> sk;

    sk.insert(pair<int,string>(1, "a"));
    sk.insert(pair<int, string>(2, "b"));
    if(sk.find(1) != sk.end()){
        cout<<"key = 1 is found"<<endl;
    }
    else {
        cout<<"key = 1 is not found"<<endl;
    }

    if(sk.find(3) != sk.end()) {
        cout<<"key = 3 is found"<<endl;
    }
    else {
        cout<<"key = 3 is not found"<<endl;
    }
    cout<<"dictionay size "<<sk.size()<<endl;
    for(map<int, string>::iterator it=sk.begin(); it!=sk.end(); it++) {
        //
        cout<<"key= "<<it->first<<" value = "<<it->second<<endl;
    }

    try {
        cout<<sk.at(3)<<endl;
    }
    catch(const exception &e) {
        cout<<e.what()<<endl;
    }
    return 1;
}
