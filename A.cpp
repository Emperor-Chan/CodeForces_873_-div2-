#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int arr[10000];
 
void sol(int n) {
	int r = (n * (n + 1)) / 2 - 1;
	int k = r / n;
	cout << (k + 2) * n - r << ' ';
	for (int i = 2; i <= n; i++) cout << i << ' ';
	cout << '\n';
}
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		sol(n);
	}
	
	return 0;
}
