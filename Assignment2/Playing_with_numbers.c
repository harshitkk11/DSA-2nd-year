// HackerRank:- https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[100];
    
    scanf("%c\n", &ch);
    scanf("%[^\n]s%*c", s);
    scanf("\n");
    scanf("%[^\n]s%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
