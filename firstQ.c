int Partition(int *array,int left,int right)
{
	int priot=array[left];
	int first=left;
	int last=right;
	while(first<last)
	{
		while(first<last&&array[last]>=priot)
		{
			last--;
		}
		Swap(&array[first],&array[last]);
		while(first<last&&array[first]<=priot)
		{
			first++;
		}
		Swap(&array[first],&array[last]);
	}
	return first;
}

void QuickSort(int *array,int first,int last)
{
	if(array==NULL)
	{
		return;
	}
	if(first<last)
	{
		int priot=Partition(array,first,last);
		QuickSort(array,first,priot-1);
		QuickSort(array,priot+1,last);
	}
	
}