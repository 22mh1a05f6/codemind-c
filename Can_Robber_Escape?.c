#include<stdio.h>
int main()
{
    int ith,a;
    scanf("%d%d",&ith,&a);
    int x[ith];
    int b[a];
    {
        scanf("%d",&x[ith]);
        scanf("%d",&b[a]);
        if(x[ith]==0 && b[a]%2==1)
        {
          printf("NO");
        }
        else if( b[a]%2==0 && b[a]!=0)
        {
          printf("YES"); 
        }
        else
        {
           printf("NO");
        }
    
    }
    
}