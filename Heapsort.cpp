/* Main function to do heap sort. This function uses buildHeap()
   and heapify()  */

void heapify(int arr[], int n, int i)  {
    int l = 2*i+1;
    int r = 2*i+2;
    int largest;
    if(arr[l]>arr[i] && l<n)
        largest = l;
    else
        largest = i;
    if(arr[largest]<arr[r] && r<n)
        largest = r;
    if(largest!=i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    for(int i= (n/2)-1; i>=0; i--)
        heapify(arr, n, i );
}

void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    for(int i= (n/2)-1; i>=0; i--)
        heapify(arr, n, i );
}
