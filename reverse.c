#include<stdio.h>

int main(){
    int n;
    printf("the value of n is :");
    scanf("%d",&n);

    for(int i=n*10;i>=n;i=i-n){
        printf("%d\n",i);
    }
    return 0;
    
}