template <typename T> void Counting_Sort(T arr[], int size) {
    if (size <= 0) return; 

    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    
    int* count = new int[maxVal + 1](); 

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i; 
            count[i]--;
        }
    }
    delete[] count; 
}