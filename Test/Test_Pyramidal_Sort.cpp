#include <catch.hpp>
#include "Pyramidal_Sort.h"

TEST_CASE() {

	int Array[5] = { 2, 6, 5, 3, 9 };
	int N = 5;
	Pyramidal_Sort(Array, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(Array[i] <= Array[i + 1]);
	}
}

TEST_CASE() {
	int N = 5;
	int Array2[5] = {};

	Pyramidal_Sort(Array2, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(Array2[i] <= Array2[i + 1]);
	}
}

TEST_CASE() {
	int N = 5;
	int Array3[5] = { 0, 0, 0, 0, 0 };
	Pyramidal_Sort(Array3, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(Array3[i] <= Array3[i + 1]);
	}
}