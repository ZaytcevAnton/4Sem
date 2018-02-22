// DynArrays.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdio>

class DynArray {
public:
	int *data;
	int maxSize;
public:
	DynArray() {
		data = new int[16];
		for (int i = 0; i < 16; i++)
			data[i] = 0;
		maxSize = 16;
	}
	DynArray(int n) {
		data = new int[n];
		for (int i = 0; i < n; i++)
			data[i] = 0;
		maxSize = n;
	}
	DynArray(int n, int d) {
		data = new int[n];
		for (int i = 0; i < n; i++)
			data[i] = d;
		maxSize = n;
	}
	DynArray(DynArray &da) {
		maxSize = da.maxSize;
		data = new int[maxSize];
		for (int i = 0; i < maxSize; i++)
			data[i] = da.data[i];
	}
	~DynArray() {
		delete[] data;
	}
	int& operator[] (const int n) {
		return data[n];
	}
};

int main() {

	DynArray *da1 = new DynArray();

	printf("%d\n", (*da1)[0]);
	(*da1)[0] = 1;
	printf("%d\n", (*da1)[0]);
   
}

