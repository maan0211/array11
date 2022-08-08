#include <stdio.h>
int max(int num1,int num2)
{
    return (num1>num2)?num1:num2;

} 
int min(int num1,int num2)
{
    return (num1>num2)? num2:num1;
}
int  getMin(int arr[],int n)
{
    int res = arr[0];
    for(int i =0;i<n;i++)
    {
        res = min(res,arr[i]);
        
    }
    return res;
}
    int getMax(int arr[],int n)
{
    int res = arr[0];
    for(int i =1;i<n;i++)
    {
        res = max(res,arr[i]);
        
    }
    return res;
}
int main()
{
int arr[] = {12,123,23,43,2523,32};
int n = sizeof(arr)/sizeof(arr[0]);
printf("max:%d\n",getMax(arr,n));
printf("main:%d\n",getMin(arr,n));
return 0;
}