#include <stdio.h>
int main ()
{
    int n,m,maxn,T,i;
    printf("Enter the number of test cases :");
    test :
    scanf("%d",&T);

    if (T<100 && T>0) 
    {

    for (i=0;i<T;i++)
    {
        scanf("%d",&n);
        scanf("%d",&m);
        maxn = n*5 + m*7;
        printf("Maximum is : %d \n",maxn);
    }
    }
    else {
        printf("Please enter a valide number of test cases :");
        goto test ;
    }
    return 0;
}
