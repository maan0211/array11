#include<stdio.h>
int main()
{
	int arr[100],size,i,j;
	int count;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the element:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int fr[size];
	int visited = -1;
	for(i=0;i<size;i++)
	{
		int count =1;
		int j;
		for(j=i+1;j<size;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				fr[j]=visited;
			}
		}
		if(fr[j]!=visited)
		{
			fr[i]=count;
		}
	}
		 printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < size; i++){    
        if(fr[i] != visited)  
            printf("    %d",arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);  
			  
    }    
    
    printf("---------------------\n");    
    return 0;    
} 