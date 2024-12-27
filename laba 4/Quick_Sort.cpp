template <typename T> int partition(T* a, int low, int high) {

    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (a[j] < pivot) {
            i++;
            int copy = a[i];
            a[i] = a[j];
            a[j] = copy;
        }
    }

    int copy = a[i + 1];
    a[i + 1] = a[high];
    a[high] = copy;
    return i + 1;
}

template <typename T> void quick_sort(T* a, int low, int high) {
    if (low < high) {

        int pi = partition(a, low, high);

        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}