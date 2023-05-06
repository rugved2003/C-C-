#include <iostream>
using namespace std;

int find_weight(int* arr, int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void find_fake_coin(int* arr,int n_coins,int real_coin_wt)
{
	int low = 0;
	int mid = 0;
	int high = n_coins - 1;
	mid = (int)(high / 2);

	while ((low <= high) && (arr[mid] == real_coin_wt))
	{
		if ((high - low) % 2 != 0)
		{
			int left = find_weight(arr, low, mid);
			int right = find_weight(arr, mid + 1, high);
			if (left <= right) {
				high = mid;
			}
			else {
				low = mid+1;
			}
		}
		else {

			if (arr[mid] != real_coin_wt) break;
			int left = find_weight(arr, low, mid-1);
			int right = find_weight(arr, mid + 1, high);
			if (left <= right) {
				high = mid-1;
			}
			else {
				low = mid + 1;
			}
		}
		mid = (int)((low + high) / 2);
	}
	if (arr[mid] != real_coin_wt) {
		cout << "Fake coin found at index " << mid + 1 << endl;
	}
	else {
		cout << "No fake coins in list!\n";
	}
}

int main()
{
	int n;
	int* coins;
	cout << "Number of coins: ";
	cin >> n;
	coins = new int[n];
	cout << "Enter coin weights:\n";
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	find_fake_coin(coins, n, 2);
	delete[]coins;
	return 0;
}
