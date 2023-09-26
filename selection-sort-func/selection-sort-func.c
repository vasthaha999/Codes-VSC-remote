//
// Created by LENOVO on 2023/9/24.
//
#include <stdio.h>

#define LEN 20

// consider whether to use "const"
void Print(const int arr[], int len);
void SelectionSort(int arr[], int len);

int main()
{
    int numbers[LEN] = {0};
    int len = -1;
    printf("Input the arr:");
    while (scanf("%d", &numbers[++len]) != EOF)
        ;

    Print(numbers, len);
    SelectionSort(numbers, len);
    Print(numbers, len);

    return 0;
}

void Print(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void SelectionSort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // find the minimum value of arr[i ... n-1]
        int min = arr[i];
        int min_index = i;

        for (int j = i + 1; j <= len - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }

        // swap arr[i] and arr[min_index]
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}