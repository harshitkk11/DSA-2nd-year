// HackerRank:- https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, m;
    float a, b;
    
    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);
    int c = n+m;
    int d = n-m;
    float e = a+b;
    float f = a-b;
    
    printf("%d %d\n", c, d);
    printf("%.1f %.1f\n", e, f);
    

    return 0;
}
