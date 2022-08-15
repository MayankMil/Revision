void swapAlternate(int *arr, int size)
{
    
    for(int start=0;start<size-1;start=start+2)
    {
        int temp = arr[start];
        arr[start] = arr[start+1];
        arr[start+1] = temp;
    }
    
}
