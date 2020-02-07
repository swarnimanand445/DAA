#include<stdio.h>
int main()
{
    int a[5]={2,3,4,5,6};
    printf("%d",a);
    for(int i=0;i<5;i++){
    printf("%d",*(a+i));
    }
    return 0;
}
