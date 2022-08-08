#include <stdio.h>
// algorithem
int findPeak(int arr[],int n)
{
    if (n == 1)
        return 0;
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n-1] >= arr[n-2])
        return n-1;
    for( int i = 0 ; i < n-1; i++){
        if (arr[i]>=arr[i-1] && arr[i]>= arr[i+1])
            return i;
        
    }
}
// driver code
int main(){
int arr[] = { 1,  20, 4, 1 ,25,99};
int n = sizeof(arr) / sizeof(arr[0]);
printf("index of peak point is %d\n",findPeak(arr,n));
return 0;
}