// my_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int n; int arr[100];
    while (x != 0)
    {
        int i = 0;
        arr[i] = (x % 10);
        i++;
    }
    cout >> arr;
}