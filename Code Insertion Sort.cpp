void insertionSort(int *input, int size)
{
    int i =1;
    int temp;
    
    while(i<size)
    {
        temp = input[i];
        int j = i-1;
        
        while(j>=0)
        {
            if(input[j]>temp)
            {
                input[j+1]=input[j];
            }
            else
            {
                break;
            }
            j--;
        }
        input[j+1]=temp;
        i++;
    }
}
