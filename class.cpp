// my_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
// class car
//public - kms driven
//private - total dist driven overall
//user input - 1 drives using rand
//2- dist travelled, total dist
//3 dist driven =0, private should not change
// invalid user input

class car
{

private:
	int total_dist_driven = 0;
public:
	int dist_driven = 0;
	void reset_all();
	void update_dist(int dist)
	{
		total_dist_driven = total_dist_driven + dist;
		dist_driven = dist_driven + dist;
	}
	void print_dist()
	{
		cout << "total_dist_driven" << total_dist_driven << endl;
		cout << "dist_driven" << dist_driven << endl;
	}
};

void car::reset_all()
{
	dist_driven = 100;
	total_dist_driven = 100;
}
int main()
{
	int user_input; int driven;
	car my_car;
	cout << "enter the values b/n 1-3" << endl;
	do
	{
		cin >> user_input;
		switch (user_input)
		{
		case 1:
			driven = rand();
			cout << "driven dist is:" << driven;
			my_car.update_dist(driven);
			break;

		case 2:
			my_car.print_dist();
			break;
		case 3:
			my_car.reset_all();
			break;
		}
	} 	while (user_input <= 3);
	return 0;
}