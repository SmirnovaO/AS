#include"stdafx.h"
#include<iostream>
#include<chrono>
#include<array>
using namespace std;

int main() {
size_t n;
cin >> n;
auto start =chrono::high_resolution_clock::now();
int* a = new int[n];
for (size_t i = 0; i < n; i++) {
a[i] = rand();

}
int temp;
for (size_t i = 0; i < n; i++) {
for (size_t j = i; j > 0 && a[j - 1] > a[j]; j--) {
temp = a[j - 1];
a[j - 1] = a[j];
a[j] = a[j - 1];

		}

	}
auto finish =chrono::high_resolution_clock::now();
chrono::duration<double> elapsed = finish - start;
cout << elapsed.count();
cin >> temp;
return 0;

}