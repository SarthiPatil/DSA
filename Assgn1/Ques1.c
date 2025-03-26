#include<stdio.h>
#include<conio.h>

int n ,arr[];
int main(){

printf("\nEnter the number of elements in the array\n");
scanf("%d",&n);

int arr[n];

printf("\nEnter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int sum=0;

for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
printf("\nSum of the array is:%d",sum);

float avg = (float)sum / n;
    printf("\nAverage of the array is: %.2f", avg);

return 0;
}

