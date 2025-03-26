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

int min=arr[0];
int mins=-1;

for (int i=0;i<n;i++){
if (arr[i]<min){
mins=min;
min=arr[i];
}
else if (arr[i] > min && (mins == -1 || arr[i] < mins)) {
mins = arr[i];
}}

if (mins == -1) {
printf("\nNo second largest number exists (all elements may be the same).\n");
} else {
printf("\nThe second largest number in the array is: %d\n", mins);
}
return 0;
}
