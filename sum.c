#include<stdio.h>
#define MAX 100
int main(){
	int arr1[MAX],arr2[MAX],n,sum[MAX],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<n;i++){
		sum[i] = arr2[i]-arr1[i];
		
	}
	for(i=0;i<n;i++)
	printf("%d ",sum[i]);
	return 0;
}