/*
Average in a stream
Given a stream of incoming numbers, find average or mean of the stream at every poin

Example 1:

Input:
n = 5
arr[] = {10, 20, 30, 40, 50}
Output: 10.00 15.00 20.00 25.00 30.00
Explanation:
10 / 1 = 10.00
(10 + 20) / 2 = 15.00
(10 + 20 + 30) / 3 = 20.00
And so on.


Example 2:

Input:
n = 2
arr[] = {12, 2}
Output: 12.00 7.00
Explanation:
12 / 1 = 12.00
(12 + 2) / 2 = 7.00
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
        printf("%.2f  ", (float)sum / i);
    }
}