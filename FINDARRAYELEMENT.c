#include<stdio.h>
int main()
{
	int arr[100],size,i,key;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the key:");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			printf("found");
		return 0;
		}
	}	
printf("not found");
}
	

