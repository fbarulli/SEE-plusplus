void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_pass_recursive(int *arr, int size, int i, int *swapped)
{
    if (i >= size - 1) // Stop at the last pair
        return;
    if (arr[i] > arr[i + 1])
    {
        swap(&arr[i], &arr[i + 1]);
        *swapped = 1;
    }
    bubble_pass_recursive(arr, size, i + 1, swapped);
}

void bubble_sort_recursive(int *arr, int size)
{
    int swapped = 0;
    if (size <= 1) // Base case
        return;
    bubble_pass_recursive(arr, size, 0, &swapped);
    if (swapped) // Only recurse if swaps occurred
        bubble_sort_recursive(arr, size - 1);
}

void sort_array(int *arr, int size)
{
    bubble_sort_recursive(arr, size);
}