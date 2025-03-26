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

printf("\n Elements in the reverse order\n");
for(int i=n-1;i>=0;i--){
printf("\n%d",arr[i]);
}
return 0;
}
