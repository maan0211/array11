#include <stdio.h>

 
int main()
{
    int a[1000],i,n,negetive=0;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
            negetive++;
        }
        
    }
    printf("negetive =%d\n",negetive);
 
    return 0;
}