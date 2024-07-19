//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://workat.tech/problem-solving/practice/cumulative-sum

#include<iostream>
#include<vector>

using namespace std;

vector<int> getCumulativeSum(vector<int>& arr) {

	vector<int> res(arr.size());

	res[0] = arr[0];

	for (int i = 1; i < arr.size(); ++i) {

		res[i] = res[i - 1] + arr[i];
	}

	return res;
}

int main() {

	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i) {

		int n = 0;
		cin >> n;

		vector<int> vec(n);

		for (int i = 0; i < vec.size(); ++i) {

			cin >> vec[i];
		}

		for (int num : getCumulativeSum(vec)) {

			cout << num << " ";
		}

		cout << "\n";
	}
}