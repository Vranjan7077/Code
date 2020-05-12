/*
Merge Sort Code
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format : Array elements in increasing order (separated by space)
Constraints : 1 <= n <= 1000
Sample Input:
6 
2 6 8 5 4 3
Sample Output: 2 3 4 5 6 8
*/
void merge (int arr1[],int size1,int arr2[],int size2,int output[])
 {
     int i=0,j=0,k=0;
     while(i<size1&&j<size2)
     {
         if(arr1[i]<arr2[j])
         {
             output[k]=arr1[i];
             k++;
             i++;
         }
          else
          {
              output[k]=arr2[j];
              j++;
              k++;
          }
     }
          while(i<size1)
          {
              output[k]=arr1[i];
              k++;
              i++;
          }
          while(j<size2)
          {
              output[k]=arr2[j];
              j++;
              k++;
          }
     

 }
          void mergeSort(int input[],int size)
          {
              if(size==0||size==1)
              {
                  return ;
              }

              int arr1[1000];
              int arr2[1000];
              int m =size/2;
              int n=size-m;
              for( int i=0;i<m;i++)
              {
                  arr1[i]=input[i];      //copy of half array 
              }
               for(int i=m;i<size;i++)
              {
                  arr2[i-m]=input[i];      //copy of  another half array 
              }
              mergeSort(arr1,m);
              mergeSort(arr2,n);   
              merge(arr1,m,arr2,n,input);

          }
/*
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
*/
