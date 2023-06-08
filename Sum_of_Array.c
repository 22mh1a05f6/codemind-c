#include<stdio.h>
int main(){
    int i,j,sum=0;
    scanf("%d",&j);
    int arr[j];
    for(i=0;i<j;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<j;i++)
    sum=sum+arr[i];
    printf("%d",sum);
}