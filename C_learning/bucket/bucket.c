#include <stdio.h>

// 桶计数排序函数
void bucketSort(int arr[], int n)
{
    // 确定最大值和最小值
    int min_val = arr[0];
    int max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
        }
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }

    // 计算桶的数量
    int bucket_size = 5;
    int bucket_count = (max_val - min_val) / bucket_size + 1;

    // 创建桶
    int buckets[bucket_count][n];
    int bucket_sizes[bucket_count];
    for (int i = 0; i < bucket_count; i++)
    {
        bucket_sizes[i] = 0;
    }

    // 将元素放入桶中
    for (int i = 0; i < n; i++)
    {
        int index = (arr[i] - min_val) / bucket_size;
        buckets[index][bucket_sizes[index]] = arr[i];
        bucket_sizes[index]++;
    }

    // 对每个桶中的元素进行排序（可以使用其他排序算法）
    for (int i = 0; i < bucket_count; i++)
    {
        for (int j = 0; j < bucket_sizes[i]; j++)
        {
            for (int k = 0; k < bucket_sizes[i] - j - 1; k++)
            {
                if (buckets[i][k] > buckets[i][k + 1])
                {
                    int temp = buckets[i][k];
                    buckets[i][k] = buckets[i][k + 1];
                    buckets[i][k + 1] = temp;
                }
            }
        }
    }

    // 输出排序结果
    int index = 0;
    for (int i = 0; i < bucket_count; i++)
    {
        for (int j = 0; j < bucket_sizes[i]; j++)
        {
            arr[index] = buckets[i][j];
            index++;
        }
    }
}

// 测试
int main()
{
    int arr[] = {29, 10, 14, 37, 13, 25, 16, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    printf("result:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
上述代码中，首先确定待排序数组的最大值和最小值，然后根据桶的大小确定桶的数量。接下来创建二维数组`buckets`作为桶，并创建一维数组`bucket_sizes`记录每个桶中元素的数量。然后将待排序数组中的元素根据值的范围放入对应的桶中。接着对每个桶中的元素进行排序，这里使用了冒泡排序算法进行示例。最后将排序后的元素依次放回原数组中，即可得到排序结果。在示例中，桶的大小为5，所以元素范围在0-40之间，共计8个元素，被分为了8个桶。最终的排序结果为10 13 14 16 22 25 29 37。
*/