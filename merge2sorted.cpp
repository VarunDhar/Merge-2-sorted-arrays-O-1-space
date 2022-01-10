#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m) {
	    int i=0;
	    int temp;
	    while(i<n)
	    {
	        if(arr1[i]>arr2[0])
	        {
	        	temp=arr2[0];
	            arr2[0]=arr1[i];
	            arr1[i]=temp;
	            
	            sort(arr2,arr2+m);
	        }
	        i++;
	        
	    }
	    return;
	    }

// { Driver Code Starts.
int main() {
    int t;
    //cin >> t;
    
        int n, m, i;
        n=4;
        m=5;
        int arr1[4]={1,3,5,7};
        int arr2[5]={0,2,6,8,9};
        //Solution ob;
    	merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    
    return 0;
} 
