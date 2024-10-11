#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> arr, int sum)
{
    vector<int> res;
    int n = arr.size();

    for (int s = 0; s < n; s++)
    {
        int curr = 0;
      
        for (int e = s; e < n; e++)
        {
            curr += arr[e];
            if (curr == sum)
            {
                res.push_back(s + 1);
                res.push_back(e + 1);
                return res;
            }
        }
    }
    return {-1}; 
}

int main()
{
    vector<int> arr = {15, 2, 4, 8, 9, 5, 10, 23};
    int sum = 23;
    vector<int> result = subarraySum(arr, sum);
    for (auto i : result)
        cout << i << " ";
    return 0;
}
