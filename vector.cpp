// my_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
//input to vector (int or float)
//-1 end of vector
// print vector
//user can modify vector
//only 1 modification allowed, which index what value
//print vector
void print_vec_el(vector<float> my_vector)
{
	for (int i = 0; i < my_vector.size(); i++)
	{
		cout << my_vector[i];
	}
}

int main()
{
	vector<float> my_vector;
	float elements; int idx; float val;
	//for (int i = 0; i < my_vector.size(); i++)
	do
	{
		cin >> elements;
		my_vector.push_back(elements);

	} 	while (elements != -1);
	cout << "printing the original vector" << endl;
	print_vec_el(my_vector);
	cout << "enter the index of vector to be modified" << endl;
	cin >> idx;
	cout << "enter the value of vector to be modified" << endl;
	cin >> val;
	my_vector.erase(my_vector.begin() + idx);
	my_vector.insert(my_vector.begin() + idx, val);
	cout << "printing the final vector" << endl;
	print_vec_el(my_vector);
	return 0;
}

