#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int get_greater(int a, int b)
{
    int max = (a > b ? a : b);
    return max;
}
vector<int> leaders(int a[], int n)
{
	
	vector<int> list_num; int greatest = a[n-1]; int prev_great = a[n - 1];
	
	for (int i = n-2; i >=0; i--)
	{
		greatest = a[i] > greatest ? a[i] : greatest;
		if ((greatest != prev_great) || (prev_great == a[i]))
		{
			list_num.push_back(greatest);
			prev_great = greatest;
		}
		
		/*
		if( (list_num.back() != greatest) && (greatest > prev_great))
		{
			list_num.push_back(greatest);
		}
		cout << "element getting popped " << list_num.back() << endl;
		if ((i < n - 2) && (a[i + 2] > list_num.back()))
		{
			
			list_num.pop_back();
		}
		*/
	}
	std::reverse(list_num.begin(), list_num.end());

	list_num.push_back(a[n - 1]);
    return list_num;

}
int main()
{
	vector<int> local_list_num;
	int n = 5;
	int A[] = { 31, 40 ,93, 40 ,98 };
	local_list_num = leaders(A, n);
	for (int j = 0; j < local_list_num.size(); j++)
	{
		cout << local_list_num.at(j)<< endl;
	}
	return 0;
}