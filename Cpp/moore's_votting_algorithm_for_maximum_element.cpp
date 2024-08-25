#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityelement(vector<int> v)
{ /*This is to find the majority element which appear more than n/2 times*/
    int count = 0;
    int element;

    for (int i = 0; i < v.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            element = v[i];
        }
        else if (v[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == element)
        {
            count1++;
        }
    }
    if (count1 > v.size() / 2)
    {
        return element;
    }
    else
    {
        return -1;
    }
}

vector<int> majorityElement(vector<int> &nums)
{ /*This is to find the majority element which appear more than n/3 times*/
    int n = nums.size();
    if (n == 0)
        return {};

    // Step 1: Find potential candidates
    int candidate1 = 0, candidate2 = 1, count1 = 0, count2 = 0;
    for (int num : nums)
    {
        if (num == candidate1)
        {
            count1++;
        }
        else if (num == candidate2)
        {
            count2++;
        }
        else if (count1 == 0 /*&& num != candidate2*/) /*if we use count first as if condition then we have to add a second codition which says that if nums = candidate2 then skip this*/
        {
            candidate1 = num;
            count1 = 1;
        }
        else if (count2 == 0)
        {
            candidate2 = num;
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify the candidates
    count1 = count2 = 0;
    for (int num : nums)
    {
        if (num == candidate1)
            count1++;
        else if (num == candidate2)
            count2++;
    }

    vector<int> ans;
    if (count1 > n / 3)
        ans.push_back(candidate1);
    if (count2 > n / 3)
        ans.push_back(candidate2);

    return ans;
}

int main()
{

    return 0;
}