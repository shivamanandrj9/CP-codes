int max(int array[],int n)
{
    int a=array[0];
    for(int i=0;i<n-1;i++)
    {
        if(array[i]<array[i+1])
        {
            a=array[i+1];
        }
    }
    return a;
}