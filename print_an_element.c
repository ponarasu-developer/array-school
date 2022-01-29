/*
Print Elements of Array
School Accuracy: 52.5% Submissions: 20072 Points: 0
Given an array Arr of size N, print all its elements.

Example 1:

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 1 2 3 4 5
Example 2:

Input:
N = 4
Arr[] = {2, 3, 5, 5}
Output: 2 3 5 5
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

*/

#include <stdio.h>

int main()
{

    int n;
    printf("Enter the size of the array");

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        /* code */
    }
}