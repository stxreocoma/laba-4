template <typename T> void BubbleSort(T* arr, int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int copy = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = copy;
			}
		}

	}
}