void oddOrEven(int arr[], int size, int *even, int *evenCount, int *odd, int &oddCount) {
    *even = 0;
    *odd = 0;
    *evenCount = 0;
    oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            *even += arr[i];
            (*evenCount)++;
        } else {
            *odd += arr[i];
            oddCount++;
        }
    }
}