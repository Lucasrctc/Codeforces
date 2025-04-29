#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> wi;
        vector<int> wo;
	int n = nums.size();
	if (n == 1)
		return nums[0];
   	if (n == 2)
		return max(nums[0], nums[1]);
	else if(n == 3)
		return max(nums[1], nums[0] + nums[2]);
        wi.push_back(nums[0]);
        wo.push_back(0);
	wi.push_back(nums[1]);
	wo.push_back(nums[0]);
	wi.push_back(nums[0] + nums[2]);
	wo.push_back(nums[1]);
        int i = 0;
        int prev = nums[3];
        for(const auto& elem: nums)
        {
	    //cout<<i<<" "<<elem<<endl;
            if (i < 3)
            {
		++i;
                continue;
            }
	    int temp = max(wo[i - 1], wo[i - 2]) + elem;
	    wi.push_back(temp);
	    temp = max(wi[i - 1], wo[i - 1]);
	    wo.push_back(temp);
	    //cout<<wi[i]<<" "<<wo[i]<<endl;
	    ++i;
        }
	i = 0;
	/*
	cout<<"with:"<<endl;
        for(const auto& elem: wi)
		cout<<++i<<" "<<elem<<endl;
	i = 0;
	cout<<"without:"<<endl;
        for(const auto& elem: wo)
		cout<<++i<<" "<<elem<<endl;
	*/
        return max(wi[n - 1], wo[n - 1]);
    }
};

int main(){
	Solution s;
	vector<int> cost_ = {2, 1, 1, 1, 1, 100, 200, 1, 1000};
	
	cout<<s.rob(cost_);
}
