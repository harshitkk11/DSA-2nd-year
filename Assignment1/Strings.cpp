// HackerRank:- https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
    cin>>A>>B;

    int lenA = A.size();
    int lenB = B.size();
    
    cout<<lenA <<" "<<lenB<<endl; 
    
    string c = A + B;
    
    cout<<c<<endl;
    
    char a=A[0];
    A[0]=B[0];
    B[0]=a;
    
    cout<<A<<" "<<B;
    
    
  
    return 0;
}
