#include <iostream>
#include <vector>
using namespace std; /*not working for karge value*/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int maxvolume = 0;

        for (int i = 0; i < height.size(); i++)
        {
            int x = 0;
            for (int j = i; j < height.size(); j++)
            {

                int minvolume = min(height[i], height[j]);
                int volume = minvolume * x;
                maxvolume = max(maxvolume, volume);
                x++;
            }
        }
        return maxvolume;
    }
};

int main()
{

    return 0;
}