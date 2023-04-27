// void mysort(int *Arr, int n , int start, int end, int mid, int* result)
// {
// // 	start=0,end=n-1;
// // 	mid= (end-start)/2;
	
// 	int *a=new int[mid+1];
// 	int *b=new int[mid];
// 	for(int i=start;i<=mid;i++)
// 		*(a+i)=*(Arr+i);
// 	int vt=0;
// 	for(int i=mid+1; i<=end;i++)
// 	{
// 		*(b+vt)=*(Arr+i);
// 		vt++;
// 	}
// 	int i=0, j=0, k=start;
// 	while(i<(mid+1) && j<(mid))
// 	{
// 		if(*(a+i)<=*(b+j))
// 		{
// 			*(result+k)=*(a+i);
// 			i++;
// 		}
// 		else 
// 		{
// 			*(result+k)=*(b+j);
// 			j++;
// 		}
// 		k++;
// 	}
// 	while(i<(mid+1))
// 	{
// 		*(result+k)=*(a+i);
// 		i++;
// 		k++;
// 	}
// 	while(j<(end))
// 	{
// 		*(result+k)=*(b+j);
// 		j++;
// 		k++;	
// 	}
// 	for(int i=0;i<n;i++)
// 		cout<<*(result+i)<<" ";
// }
