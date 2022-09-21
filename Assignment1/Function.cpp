// HackerRank:- https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int arr[4]={a,b,c,d};
    int maxi=arr[0];
    for(int i=0;i<=4;i++){
        maxi = max(maxi, arr[i+1]);
        }
        return maxi;
    }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
