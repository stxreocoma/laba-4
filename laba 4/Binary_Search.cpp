template <typename T> int Binary_Search(T* arr, T item, int N) {
	int low, high, mid, guess;
	low = 0;
	high = N - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		guess = arr[mid];
		if (guess == item) {
			return mid;
		}
		if (guess < item) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
}