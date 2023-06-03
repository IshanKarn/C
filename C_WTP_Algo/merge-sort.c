void mergesort(int arr[],int first,int last);
void merge(int arr[],int first,int mid,int last);
void main()
{
	int arr[50];
	int n,i;
	
	printf("Enter Size of Array\n");
	scanf("%d",&n);
	
	printf("Enter Value in Array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	mergesort(arr,0,n-1);
	
	printf("Sorted Array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}

void mergesort(int arr[],int first,int last)
{
	int mid;
	
	if(first<last)
	{
		mid = (first+last)/2;
		mergesort(ar
	merge(arr,first,mid,last);
	}
}

void merge(int arr[],int first,int mid,int last)
{
	int b[50];
	int i,j,k;
	i= first;
	j = mid+1;
	k = first;
	
	while(i<=mid && j<=last)
	{
		if(arr[i]<=arr[j])
		b[k++] = arr[i++];
		
		else
		  b[k++] = arr[j++];
	}
	
	if(i>mid)
	{
		while(j<=last)
		b[k++] = arr[j++];
	}
	else
	{
		while(i<=mid)
		b[k++] = arr[i++];
	}
	
	for(i=first; i<=last; i++)
	arr[i] = b[i];
	
}