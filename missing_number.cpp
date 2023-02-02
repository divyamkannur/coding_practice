# if 0
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int MissingNumber(vector<int>& array, int n)
{
	sort(array.begin(), array.end());
	int missing_num = 0;
	if (array[0] != 1)
	{
		missing_num = 1;
	}
	if (array[n - 2] != n)
	{
		missing_num = n;
	}
	for (int i = 0; i < n-2; i++)
	{
		int diff = 0;
		diff = array[i + 1] - array[i];
		if (diff > 1)
		{
			missing_num = array[i] + 1;
			break;
		}

	}
	
	return missing_num;
}

int main()
{
	int n = 8; int ans = 0;
	vector <int> A;
	A = { 1 ,3, 4, 5, 6, 7, 8 };
	ans = MissingNumber(A, n);
	cout << "missing number: "<< ans;
	return 0;
}
#endif