void arrange(int *arr, int n)
{
    int start = 0;
    int end = n-1;
    int val=1;
    
    while(start<=end)
    {
        if(val%2==1)
        {
            arr[start]=val;
            val++;
            start++;
        }
        else
        {
            arr[end]=val;
            val++;
            end--;
        }
    }
}
