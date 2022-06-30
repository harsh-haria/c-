// given a group of numbers and a sumNumber return the numbers with which we can generate targetSum and if we cannot return null
// note: numbers can be used any number of times
// note: All numbers are non negative
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int targetSum;
    cin >> targetSum;
    int size;
    cin >> size;
    vector<int> numbers;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    // input till here
    vector<int> ans;
    howSum(targetSum, numbers, ans);
    // cout<<ans<<endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}