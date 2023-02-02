class Car
{
public:
	void update_dist()
	{
		driven_dist += 1;
	}
private:
	int model_num;
	bool is_leftDrive;
	int driven_dist = 0;
};
void some_func();
