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

int max=arr[0];
for(int i=1;i<n;i++){
if(arr[i]>max){
max=arr[i];
}}
printf("Largest element in the array is:%d",max);
return 0;
}
