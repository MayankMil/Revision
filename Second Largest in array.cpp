#include<climits>
int findSecondLargest(int *input, int n)
{
    if(n<=0)
    {
        return INT_MIN;
    }
    int largest = input[0];
    int secondLargest = INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(input[i]>largest)
        {
            secondLargest = largest;
            largest = input[i];
        }
        else if(input[i]>secondLargest&&input[i]!=largest)
        {
            secondLargest = input[i];
        }
    }
    return secondLargest;
}
