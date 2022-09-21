HackerRank:- https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true


#include <stdio.h>

void update(int *a, int *b){
    int a1=*a, b1=*b;
    *a = a1+b1;
    *b = a1-b1;
    if (*b<0) {
        *b = -*b;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    
    printf("%d\n%d", a, b);
    return 0;
}
