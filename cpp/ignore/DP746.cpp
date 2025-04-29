#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
	    map<int, int> r = {{cost.size() - 1, cost[cost.size() - 1]}, {cost.size() - 2, cost[cost.size() - 2]}};
        for(int i = cost.size() - 3; i >= 0; --i)
        {
		    r[i] = min(r[i + 1], r[i + 2]) + cost[i];
        }
        return min(r[0], r[1]);
    }
};

int main(){
	Solution s;
	vector<int> cost_ = {1,100,1,1,1,100,1,1,100,1};
	cout<<s.minCostClimbingStairs(cost_);
}
