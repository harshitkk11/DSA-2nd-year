// HackerRank:- https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    scanf("%d", &i);
    if(i<=9){
            if(i==1){
                printf("one");
            }
            else if(i==2){
                printf("two");
            }
            else if(i==3){
                printf("three");
            }
            else if(i==4){
                printf("four");
            }
            else if(i==5){
                printf("five");
            }
            else if(i==6){
                printf("six");
            }
            else if(i==7){
                printf("seven");
            }
            else if(i==8){
                printf("eight");
            }
            else if(i==9){
                printf("nine");
            }
        }
    else if(i>9){
        printf("Greater than 9");
    }
    
    return 0;
}
