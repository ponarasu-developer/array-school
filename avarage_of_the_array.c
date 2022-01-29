/*
For a given array of price of items,you have to calculate the average of all prices upto 2 decimal places.
Note: Sum is printed automatically, you only need to calculate and return the average



Example 1:

Input:
5
1 2 3 4 5
Output:
15 3.00
Explanation:
Sum of the array is 15, hence
average is 15/5=3.00.

Example 2:

Input:
9
2 55 85 656 52 554 545 5 2
Output:
1956 217.33
Explanation:
Sum of the array is 1956, hence
average is 1956/9= 217.33.

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%.2f", (float)sum / n);
}