#include<stdio.h>
#include<math.h>
 int count_digit(int x){
        int count=0;
        while(x>0)
    {
        x=x/10;
        count++;
    }
    return count;
    }
       void check_palindrome(int x, int count){
        int m=x;
        int rev=0;
        int a;
        while(m>0)
        {
            a=m%10;
            rev=rev+a*pow(10,(count-1));
            m=m/10;
            count--;
        }
        if(rev==x)
    {
        printf("yes");
       
        
    }
    else{
        printf("No");
        
        
    }
        
    }
int main()
{
    int x;
    
    printf("take the input number from the user");
    scanf("%d",&x);
   int y= count_digit(x);
    check_palindrome(x,y);
   
 
    return 0;
}
