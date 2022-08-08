#include <stdio.h>
void display(int arr[],int n)
{
    for(int i =0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
void indDeletion(int arr[],int size,int index)
{
for(int i = index;i<size-1;i++)
{
    arr[i]=arr[i+1];
}
}
int main()
{
    int arr[20],size;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the element:");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
int index;
printf("Enter the index:");
scanf("%d",&index);
display(arr,size);
indDeletion(arr,size,index);
size-=1;
display(arr,size);
return 0;
}