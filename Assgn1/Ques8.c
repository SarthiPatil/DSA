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

int min=arr[0];
for(int i=1;i<n;i++){
if(arr[i]<min){
min=arr[i];
}}
printf("Smallest element in the array is:%d",min);
return 0;
}
