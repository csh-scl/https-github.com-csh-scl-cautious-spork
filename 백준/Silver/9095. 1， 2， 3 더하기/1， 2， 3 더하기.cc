#include <bits/stdc++.h>
using namespace std;

int arr[12];
int num;

int main()
{
	cin >> num;
	for (int i = 0; i < num; i++) {
		int index;
		cin >> index;
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 4;
		for (int i = 4; i <= index; i++) {
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		}
		cout << arr[index] << '\n';

	}
}
