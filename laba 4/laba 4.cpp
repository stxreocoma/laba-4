#include <iostream>

#include "Bubble_Sort.h"
#include "Shaker_Sort.h"
#include "Insertion_Sort.h"
#include "Selection_Sort.h"
#include "Quick_Sort.h"
#include "Comb_Sort.h"
#include "Counting_Sort.h"
#include "Pyramidal_Sort.h"
#include "Merge_Sort.h"


#include "Binary_Search.h"
#include "BFS.h"
#include "DFS.h"




using namespace std;

int main() {
	
	setlocale(LC_ALL, "RU");

	const int N = 8;
	int arr[N] = { 7, 17, 9, 3, 13, 1, 16, 10 };
	//int arr[N] = { 17 ,18, 34, 40, 41, 48, 64, 89 };

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << Binary_Search(arr, 16, N) << endl;

	


	vector<vector<int>> graph = {
	 {1, 2},    // Вершина 0 связана с 1 и 2
	 {0, 3, 4}, // Вершина 1 связана с 0, 3 и 4
	 {0},       // Вершина 2 связана с 0
	 {1},       // Вершина 3 связана с 1
	 {1}        // Вершина 4 связана с 1
	};
	BFS(graph, 0);
	DFS(graph, 0);

	
	
}