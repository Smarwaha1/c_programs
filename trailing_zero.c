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
int trailing(int b )
{
    int a ,count=0;
    while(b>0)
    {
        a=b%10;
        if(a==0)
        {
            count++;
        }
        else
        break;
        b=b/10;
    }
return count;
}
int main(){
    int a;
    int res,trl;
    printf("enter the number to find the factorial");
    scanf("%d",&a);
    res=factorial(a);
    trl=trailing(res);
    printf("%d\n",res);
    printf("%d\n",trl);
    return 0;
}