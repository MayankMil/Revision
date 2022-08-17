void pushZeroesEnd(int *input, int size)
{
    int nonZero = 0;
    for(int i=0;i<size;i++)
    {
        if(input[i]!=0)
        {
            int temp = input[i];
            input[i] = input[nonZero];
            input[nonZero] = temp;
            nonZero++;
        }
    }
}
