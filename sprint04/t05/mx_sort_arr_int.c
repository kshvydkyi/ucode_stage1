void mx_sort_arr_int(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
    { 
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
            }
        }
    }
}





