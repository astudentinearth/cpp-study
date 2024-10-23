#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
}

void case1()
{
    vector<int> params = {2, 7, 11, 15};
    vector<int> result = twoSum(params, 9);
    cout << result[0] << ", " << result[1] << endl;
}

void case2()
{
    vector<int> params = {3, 2, 4};
    vector<int> result = twoSum(params, 6);
    cout << result[0] << ", " << result[1] << endl;
}

void case3()
{
    vector<int> params = {3, 3};
    vector<int> result = twoSum(params, 6);
    cout << result[0] << ", " << result[1] << endl;
}

int main()
{
    // TODO: come up with something with less complexity than O(n^2)
    case1();
    case2();
    case3();
    return 0;
}