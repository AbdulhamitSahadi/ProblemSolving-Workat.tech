//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://workat.tech/problem-solving/practice/positive-cumulative-sum

#include<iostream>
#include<vector>
using namespace std;

vector<int> getPositiveCumulativeSum(vector<int>& arr) {
	int len = arr.size();
	vector<int> res, cumulativeArr(len);
	cumulativeArr[0] = arr[0];
	for (int i = 1; i < len; ++i) {
		cumulativeArr[i] = cumulativeArr[i - 1] + arr[i];
	}
	for (int i : cumulativeArr) {
		if (i > 0) {
			res.push_back(i);
		}
	}

	return res;
}

int main() {

	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i) {

		int n = 0;
		cin >> n;
		vector<int> a(n);

		for (int i = 0; i < n; ++i) {

			cin >> a[i];
		}

		for (int& num : getPositiveCumulativeSum(a)) {

			cout << num << " ";
		}

		cout << "\n";
	}

	return 0;
}