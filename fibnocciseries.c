#include <stdio.h>

int main(){
int first =0,second = 1,sum =0,n;
printf("Enter the term of the series:");
scanf("%d",&n);
printf("Fibnocci Series: %d, %d, ",first,second);
sum = first+second;
while(sum<=n){
    printf("%d, ",sum);
    first = second;
    second = sum;
    sum = first + second;
}
return 0;
}