// HackerRank:- https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true


#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int arr[4]={a, b, c, d};
    int i;
    for(i=0; i<4; i++){
        if (arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    return arr[0];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
