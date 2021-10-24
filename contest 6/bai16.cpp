#include <bits/stdc++.h> 
using namespace std; 
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
int partition (int a[], int low, int high)  
{  
    int x = a[high]; 
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++){
        if(a[j] <= x){  
            i++;
            swap(&a[i], &a[j]);  
        }  
    }  
    swap(&a[i + 1], &a[high]);  
    return (i + 1);  
}  
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  {
        int p = partition(arr, low, high);  
        quickSort(arr, low, p - 1);  
        quickSort(arr, p + 1, high);  
    }  
}  
int main()  
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
    	quickSort(a, 0, n - 1);
    	for(int i=0;i<n;i++) cout<<a[i]<<" ";
    	cout<<endl;
    }
    return 0;  
}  
