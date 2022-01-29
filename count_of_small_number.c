/*
Given an sorted array A of size N. Find number of elements which are less than or equal to given element X.



Example 1:

Input:
N = 6
A[] = {1, 2, 4, 5, 8, 10}
X = 9
Output:
5


Example 2:

Input:
N = 7
A[] = {1, 2, 2, 2, 5, 7, 9}
X = 2
Output:
4
*/

#include <stdio.h>
int main()
{
    printf("Enter the size of the array and target element:");
     int n, x;
    scanf("%d%d", &n,&x);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
int count = 0;
for (int i = 0; i < n; i++)
{
    if(x<arr[i]){
        break;
    }else
    {
        count++;
    }
    
}

printf(" %d elements are smaller than givn element %d",count,x);


}