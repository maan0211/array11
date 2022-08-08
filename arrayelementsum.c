#include <stdio.h>

int main(){
int arr[10],size,sum[20],i;
printf("Please enter the size:");
scanf("%d",&size);
for(int i =0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++)
{
    sum[i] = sum[20]+arr[i];
    arr[i]++;
}
for(i=0;i<size;i++){
	printf("%d",sum[i]);
}

return 0;
}