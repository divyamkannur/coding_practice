using namespace std;
#include <iostream>
#include <vector>

#if 0
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
			int sum = new_wt[j]; int profit = +new_val[j];
			for (int i = j+1; i < new_wt.size(); i++)
			{
				
				sum = sum + new_wt[i];
				cout << "sum " << sum << endl;
				profit = profit + new_val[i];
				if (sum == W)
				{
					new_sum = sum;
					if ((max > profit) && (profit > new_profit))
					{
						new_profit = max;
					}
					else if (profit> new_profit)
					{
						new_profit = profit;
					}
					cout << "profit 3 " << profit << endl;
				}
				if (new_wt[i] == W)
				{
					if (new_val[i] > max)
					{
						new_profit = new_val[i];
					}
					else
					{
						new_profit = max;
					}
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
		new_profit= 0;
	}
	return new_profit;
}


int main()
{
	int W = 7; int n = 5;
	int val[] = {1, 18, 20, 29, 20};
	int wt[] = { 3, 1, 4, 5, 6 };
	int total_profit;
	total_profit = calc(val, wt, W, n);
	cout << "*******************" << endl;
	cout << "profit_total " << total_profit;
	return 0;
}

int main()
{
	char val;
	char* p = NULL;
	p = &val;
	char& r = *p;
	

		r = '!';
	return 0;
}
#endif