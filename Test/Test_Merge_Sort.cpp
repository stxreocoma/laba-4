#include <catch.hpp>
#include "Merge_Sort.h"


TEST_CASE() {

	int Array[5] = { 2, 6, 5, 3, 9 };
	int N = 5;
	Merge_Sort(Array, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(Array[i] <= Array[i + 1]);
	}
}

TEST_CASE() {
	int N = 5;
	int Array2[5] = {};

	Merge_Sort(Array2, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(Array2[i] <= Array2[i + 1]);
	}
}

TEST_CASE() {
	int N = 5;
	double Array3[5] = { 2.3, 5, -1, 8, -20 };
	Merge_Sort(Array3, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(Array3[i] <= Array3[i + 1]);
	}
}