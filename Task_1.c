#include <stdio.h>
int findMajorityElement(int arr[], int size) {
    int candidate = -1, count = 0;
    for (int i = 0; i < size; i++)
      {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) 
        {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < size; i++)
      {
        if (arr[i] == candidate) 
        {
            count++;
        }
    }

    if (count > size / 2)
    {
        return candidate;
    } else 
    {
        return -1; 
    }
}

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int result = findMajorityElement(arr, n);
    if (result != -1) {
        printf("Majority Element: %d\n", result);
    } else {
        printf("No majority element found\n");
    }
    return 0;
}
