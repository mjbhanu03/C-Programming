void print() {
    short int arr[] = {18, 9, 19, 25, 21, 42, 28, 11, 8, 6};
    int even, odd, evenCount, oddCount;

    oddOrEven(arr, sizeof(arr)/sizeof(arr[0]), &even, &evenCount, &odd, &oddCount);

    printf("%d is the total amount of Even.\n", even);
    printf("%d is the total numbers of Even.\n", evenCount);
    printf("%d is the total amount of Odd.\n", odd);
    printf("%d is the total numbers of Odd.\n", oddCount);
}
