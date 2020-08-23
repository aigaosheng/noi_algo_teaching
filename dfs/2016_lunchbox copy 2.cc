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
bool is_select[60001];
int stack_answer[60001][2];

int dfs(int cur_loc, int cap, int answer) {
    int aws1, aws0;
    //cout<<cur_loc<<","<<cap<<","<<answer<<endl;
    if(N == 0 | M == 0 | cur_loc == M){
        return answer;
    }
    int next_loc = cur_loc + 1;

    bool is_allocate = true;
    if(cap < W[next_loc]) {
        if(stack_answer[next_loc][0] != -1)
            aws1 = stack_answer[next_loc][0];
        else {
            aws1 = dfs(next_loc, cap, answer);
        }
        is_allocate = false;
    }
    else {
        if(stack_answer[next_loc][1] != -1)
            aws1 = stack_answer[next_loc][1];
        else {
            aws1 = dfs(next_loc, cap - W[next_loc], answer + 1);
        }
        if(stack_answer[next_loc][0] != -1)
            aws0 = stack_answer[next_loc][0];
        else {
            aws0 = dfs(next_loc, cap, answer);
        }
        if(aws1 < aws0){
            aws1 = aws0;
            is_allocate = false;
        }
    } 

    if(is_allocate) {
        stack_answer[next_loc][1] = aws1;   
        is_select[next_loc] = true;  
    }
    else
        stack_answer[next_loc][0] = aws1; 
    return aws1;    
}

int main(int argc, char *argv[]) {
    cout<<"input #-of-lunch boxes, #-of-school, and # of school lunch boxes distributed"<<endl;
    cin>>N>>M;

    /*
    W = new unsigned int[M];
    if(W == NULL) {
        cout<<"Warning: no enough memory"<<endl;
        return 1;
    }
    */

    for(int i = 1; i <= M; i++) {
        cin>>W[i];
        stack_answer[i][0] = -1;
        stack_answer[i][1] = -1;
        is_select[i] = false;
    }

    //cout<<"Your input is :"<<endl<<N<<","<<M<<endl;
    //note: lunch boxes per school is stored from 1, not 0, 0: as root node
    /*for(int i = 1; i <= M; i++){
        cout<<W[i]<<",";
    }*/

    int answer = 0;
    answer = dfs(0, N, 0);

    cout<<"Answer"<<endl<<answer<<endl;

    int s = 0;
    int cnt = 0;
    for(int i = 1; i <= M; i++) {
        if(is_select[i]) {
            cout<<W[i]<<",";
            s += W[i];
            cnt ++;
        }
    }
    cout<<endl<<s<<endl<<cnt<<endl;
    

    /*
    if(W !=NULL)
        delete W[];
    */

}

