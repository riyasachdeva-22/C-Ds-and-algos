void merge(int a[],int s,int m,int e)
{
    int size=e-s+1;
    int *out=new int[size];
    int i=s;
    int j=m+1;
    int k=0;
    while(i<=m && j<=e)
    {
        if(a[i]>a[j])
        {
            out[k]=a[j];
            k++;
            j++;
        }
        else
        {
            out[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=m)
    {
        out[k]=a[i];
        i++;
        k++;
    }
    while(j<=e)
    {
        out[k]=a[j];
        j++;
        k++;
    }
    int t=0;
    for(int i=s;i<=e;i++)
    {
        a[i]=out[t];
        t++;
    }
    delete []out;
}
void helper(int input[],int s,int e)
{
    if(s>=e)
        return;
	int m=(s+e)/2;
    helper(input,s,m);
    helper(input,m+1,e);
    merge(input,s,m,e);
}
void mergeSort(int input[], int size)
{
	// Write your code here
    int s=0;
    int e=size-1;
    helper(input,s,e);
    
        
}

