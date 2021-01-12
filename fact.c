#include<stdio.h>
int factorial(int n){
    int fact=1;
    if(n==0){
        return fact;
    }
    else if(n>0)
    for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}
int main(){
    int a;
    int res;
    printf("enter the number to find the factorial");
    scanf("%d",&a);
    res=factorial(a);
    printf("%d",res);
    return 0;
}