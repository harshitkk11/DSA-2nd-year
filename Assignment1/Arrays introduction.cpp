// HackerRank:- https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int A[n];
    
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for (int i=0; i<n; i++){
        cout<<A[n-1-i]<<" ";
    }
    return 0;
}
