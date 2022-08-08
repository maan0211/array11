#include <stdio.h>
void display(int arr[],int n)
{
    for (int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int indInsertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for (int i = size -1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main(){
int arr[10],size;
printf("eneter the size");
scanf("%d",&size);
printf("eneter the element");
for(int i = 0;i<size;i++)
scanf("%d",&arr[i]);
int element;
printf("enter the element:");
scanf("%d",&element);
int index;
printf("enter the index:");
scanf("%d",&index);
indInsertion(arr,size,element,20,index);
size+=1;
display(arr,size);

return 0;
}