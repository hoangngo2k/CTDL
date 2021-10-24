#include<iostream>
#include<algorithm>
 
using namespace std;
 
int A[50], KQ[50], n, k, kt = 0, t;
 
void In(int h) {
	cout << "[";
	for (int i = 1; i <= h; i++) {
		cout << KQ[i];
		if (i != h) cout << " ";
	}
	cout << "] ";
}
 
void DeQuy(int i, int begin, int sum) {
 
	for (int j = begin; j <= n; j++) {
		KQ[i] = A[j];
		if (sum +KQ[i] == k) {
			In(i);
			kt = 1;
			return;
		}
		else DeQuy(i+1,j + 1, sum + KQ[i]);
	}
 
}
 
int main() {
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		kt = 0;
		for (int i = 1; i <= n; i++) cin >> A[i];
		for (int i = 1; i <= n; i++) KQ[i] = 0;
		sort(A + 1, A + n + 1);
		DeQuy(1,1, 0);
		if (kt == 0) cout << -1;
		cout << endl;
	}
 
	return 0;
}
