#include<stdio.h>
#include<conio.h>

int n ,arr[];
int main(){

printf("\nEnter the number of elements in the array\n");
scanf("%d",&n);

if (n < 2) {
printf("Array must have at least two elements to find the second largest number.\n");
return 1;
}

int arr[n];

printf("\nEnter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int max=arr[0];
int maxs=-1;

for (int i=0;i<n;i++){
if (arr[i]>max){
maxs=max;
max=arr[i];
}
else if (arr[i] > maxs && arr[i] != max) {
maxs = arr[i];
}}

if (maxs == -1) {
printf("\nNo second largest number exists (all elements may be the same).\n");
} else {
printf("\nThe second largest number in the array is: %d\n", maxs);
}
return 0;
}
