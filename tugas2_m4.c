#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];
    float mean, median;
    int mode, maxCount = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    printf("Masukkan %d angka:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Hitung mean
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    mean = (float)sum / n;

    // Sorting bubble sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Hitung median
    if(n % 2 == 0)
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        median = arr[n/2];

    // Hitung mode
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    // Output
    printf("\nData setelah sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMean   = %.2f", mean);
    printf("\nMedian = %.2f", median);
    printf("\nMode   = %d\n", mode);

    return 0;
}