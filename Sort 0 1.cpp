void sortZeroesAndOne(int *input, int size)
{
    int j = 0;
    for(int i=0;i<size;i++)
    {
        if(input[i]==0)
        {
            int temp = input[j];
            input[j] = input[i];
            input[i] = temp;
            j++;
        }
    }
}
