/*
Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.



Example 1:

Input:
5 2
10 20 30 40 50
Output:
30


Example 2:

Input:
7 4
10 20 30 40 50 60 70
Output:
50

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
*/

#include <stdio.h>

int main()
{

    int n, x;
    printf("Enter the no of elements  and targest index");
    scanf("%d%d", &n, &x);

    int a[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    if (x < n)
    {
        printf(" value at the index : %d", a[x]);
    }
    else
    {
        printf("Invalid index number");
    }
}