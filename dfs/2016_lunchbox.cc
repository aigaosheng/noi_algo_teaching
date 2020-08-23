/*
N: # of lunch boxses
M: # of schools
Ki: # of lunch boxes distributed to i-th school
Objective: distrbiute lunch boxes to maximal number of schools
Rule/constraints: each school can get Ki lunch boxes or 0

i.e. Xi: 1/0: indicate i-th school get lunch boxes or not

max sum(Xi)
condition: Xi*Ki<=N
Xi: 0/1

*/

#include <bits/stdc++.h>

using namespace std;

int dfs();

int MAX_N = 60001;
int MAX_M = 60001;

unsigned short N, M;
unsigned short W[60001];

int main(int argc, char *argv[]) {
    cout<<"input #-of-lunch boxes, #-of-school, and # of school lunch boxes distributed"<<endl;
    cin>>N>>M;

    for(int i = 0; i < M; i++) {
        cin>>W[i];
    }

    cout<<"Your input is :"<<endl<<N<<","<<M<<endl;
    for(int i = 0; i < M; i++){
        cout<<W[i]<<",";
    }

    

}

