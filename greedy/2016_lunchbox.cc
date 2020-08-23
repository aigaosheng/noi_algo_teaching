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

int MAX_N = 60001;
int MAX_M = 60001;

int N, M;
int W[60001];

int greedySolver() {
    int aws1, aws0;
    sort(W, W + M);
    int cap = 0;
    int nschool = 0;
    for(int i = 0; i < M; i++) {
        cap += W[i];
        if(cap > N)
            break;
        nschool ++;
    }
    return nschool;    
}

int main(int argc, char *argv[]) {
    cout<<"input #-of-lunch boxes, #-of-school, and # of school lunch boxes distributed"<<endl;
    cin>>N>>M;

    for(int i = 0; i < M; i++) {
        cin>>W[i];
    }

    int answer;
    answer = greedySolver();

    cout<<"Answer"<<endl<<answer<<endl;

}

