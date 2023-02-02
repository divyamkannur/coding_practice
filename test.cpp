#if 0
using namespace std;
#include <iostream>
#include <vector>

int calc(int val[], int wt[], int W, int n)
{
	int new_sum = 0, new_profit = 0;

	vector<int> new_val;
	vector<int> new_wt;
	for (int i = 0; i < n; i++)
	{
		// eliminate all values greater than weight
		if (wt[i] <= W)
		{
			new_wt.push_back(wt[i]);
			new_val.push_back(val[i]);
		}
	}
	if (new_wt.size() > 0)
	{
		int max = new_val[0];
		// to find the maximum value/profits of all the weights
		for (int i = 0; i < new_wt.size(); i++)
		{
			if (new_val[i] > max)
			{
				max = new_val[i];
			}
		}
		cout << "max_profit is " << max << endl;
		for (int j = 1; j < new_wt.size(); j++)
		{
			if (new_wt[j] < new_wt[j - 1])
			{
				// sort the array in acsending order
				int temp_wt, temp_val;
				temp_wt = new_wt[j];
				new_wt[j] = new_wt[j - 1];
				new_wt[j - 1] = temp_wt;
				temp_val = new_val[j];
				new_val[j] = new_val[j - 1];
				new_val[j - 1] = temp_val;
			}
		}
		for (int j = 0; j < new_wt.size(); j++)
		{
			for (int i = j; i < new_wt.size(); i++)
			{
				int sum = 0; int profit = 0;
				sum = sum + new_wt[i] + new_wt[j];
				cout << "sum " << sum << endl;
				profit = profit + new_val[i] + new_val[j];
				if (sum == W)
				{
					new_sum = sum;
					new_profit = profit;
					cout << "profit 3 " << new_profit << endl;
					if (max < profit)
					{
						max = profit;
					}
				}
				if (new_wt[i] == W)
				{
					if (new_val[i] > max)
					{
						max = new_val[i];
					}/*
					else
					{
						new_profit = max;
					}*/
				}
			}
		}
		if (new_sum > W)
		{
			new_profit = max;
			cout << "profit 2 " << new_profit << endl;
		}
	}
	else
	{
		cout << "there are no weights" << endl;
		new_profit = 0;
	}
	return new_profit;
}


int main()
{
	int W = 7; int n = 5;
	int val[] = { 7, 8, 1,9, 20 };
	int wt[] = { 1, 3, 4, 5, 6 };
	int total_profit;
	total_profit = calc(val, wt, W, n);
	cout << "*******************" << endl;
	cout << "profit_total " << total_profit;
	return 0;
}
#endif