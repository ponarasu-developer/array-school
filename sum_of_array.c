/*
Given an array of N integers. Your task is to print the sum of all of the integers.
Example 1:

Input:
4
1 2 3 4
Output:
10

Example 2:

Input:
6
5 8 3 10 22 45
Output:
93
*/


#include<stdio.h>

int main(){

int n;
printf("Enter the size of the array:");
scanf("%d",&n);

int arr[n];

printf("Enter the array elements:");


for(int i =0;i<n;i++){

    scanf("%d",&arr[i]);
}


int sum =0;

for(int i =0;i<n;i++){

    sum = sum + arr[i];
}


printf("Total value of the elements in array is : %d ",sum);




}