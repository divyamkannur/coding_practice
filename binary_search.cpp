#if 0
//{ Driver Code Starts
// Initial template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
    int binarysearch(int arr[], int n, int k)
    {
        // code here
        int left_idx, right_idx, middle_idx = 0, num = 0;
        left_idx = 0; right_idx = n - 1;
        bool condn = true;
        if ((k < arr[left_idx]) || (k > arr[right_idx]))
        {
            num = -1;
            condn = false;
        }
        else if (arr[left_idx] == k)
        {
            num = left_idx;
            condn = false;
        }
        else if (arr[right_idx] == k)
        {
            num = right_idx;
            condn = false;
        }
        while(condn)
        {

            middle_idx = (left_idx + right_idx) / 2;
            if (k == arr[middle_idx])
            {
                num = middle_idx;
                condn = false;
                break;
            }
            else if (k < arr[middle_idx])
            {
                right_idx = middle_idx - 1;
              
            }
            else if (k > arr[middle_idx])
            {
                left_idx = middle_idx + 1;
            }
        }
        return num;
    }
};

//{ Driver Code Starts.
int main()
    {
    int* pint[2] = { nullptr };
        pint[0] = new int;
        cout << "pint = " << pint << endl;
        //delete pint;
        pint[1] = new int;
        cout << "pint = " << pint << endl;
        delete pint[0];
        pint[0] = new int;
}
#endif
// } Driver Code Ends