#if 0
#include <iostream>
#include <vector>
using namespace std;

struct dob
{
	int day;
	int month;
	int year;
};
class  Employee 
{
public:
	Employee()
	{
		cout << "constructor" << endl;
	};
	~Employee()
	{
		cout << "destructor" << endl;
	};

	char username[100];
	char gender[100];
	dob user_dob;
	int id;
	int* ptr;
	void get_user_details(int user_id);

};


void Employee::get_user_details(int user_id)
{
	cout << "enter user name" << endl;
	cin >>username;
	cout << "enter birth day" << endl;
	cin >> user_dob.day;
	cout << "enter birth month" << endl;
	cin >> user_dob.month;
	cout << "enter birth year" << endl;
	cin >> user_dob.year;
	cout << "enter user gender" << endl;
	cin >> gender;
	id = user_id;
}

vector <Employee *> storage;

int main()
{
	int option;
	
	cout << "1: Sign Up" << endl;
	cout << "2: Sign Out" << endl;
	cout << "3: Display User" << endl;
	int id = 0; int user_id;
	while (1)
	{
		cout << "select the operation you want to perform:" << endl;
		cin >> option;
		cout << "you have chosen: " << option << endl;
		switch (option)
		{
		case 1:
		{
			int* var_name = new int;
			Employee* p = new Employee;
			cout << "your user ID is " << id << endl;
		    p->get_user_details(id);
			storage.push_back(p);
			++id;
			break;
		}
		case 2:
		{
			cout << "you have slected Sign Out" << endl;
			cout << "enter the user id to be deleted" << endl;
			cin >> user_id;
			
			if (user_id <= id)
			{
				for (int i = 0; i <= id; i++)
				{
					if (user_id == storage.at(i)->id)
					{
						cout << storage.at(i)->username << endl;
						cout << storage.at(i)->user_dob.day << endl;
						cout << storage.at(i)->user_dob.month << endl;
						cout << storage.at(i)->user_dob.year << endl;
						cout << storage.at(i)->gender << endl;
						delete storage.at(i);
						--id;
					}
					else
					{
						cout << "valid user ID noy found" << endl;
					}
				}
			}
			else
			{
				cout << "enter the valid ID, it ranges from 0 to " << id << endl;
			}
			break;
		}
		case 3:
		{
			cout << "Displaying user names according to DOB:" << endl;
			for (int i = 0; i < id; i++)
			{
				for (int j = i+1; j < id; j++)
				{
					if (storage.at(i)->user_dob.year < storage.at(j)->user_dob.year)
					{
						swap(storage.at(i), storage.at(j));
					}
					if ((storage.at(i)->user_dob.year == storage.at(j)->user_dob.year) && (storage.at(i)->user_dob.month < storage.at(j)->user_dob.month))
					{
						swap(storage.at(i), storage.at(j));
					}
					if ((storage.at(i)->user_dob.year == storage.at(j)->user_dob.year) && (storage.at(i)->user_dob.month == storage.at(j)->user_dob.month) \
						&& (storage.at(i)->user_dob.day < storage.at(j)->user_dob.day))
					{
						swap(storage.at(i), storage.at(j));
					}
				}
			}
			for (int j = 0; j < id; j++)
			{
				cout << "User details for id " << storage.at(j)->id << endl;
				cout << storage.at(j)->username << endl;
				cout << storage.at(j)->user_dob.day << endl;
				cout << storage.at(j)->user_dob.month << endl;
				cout << storage.at(j)->user_dob.year << endl;
				cout << storage.at(j)->gender << endl;
			}
			break;
		}
		}
	}


	return 0;
}
#endif
