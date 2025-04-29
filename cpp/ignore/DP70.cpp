#include <iostream>
#include <map>
class Solution {
public:
    int climbStairs(int n) {
        static std::map <int, int> result{{1, 1}, {2, 2}};
        if(result.find(n) == result.end())
        {
            result[n] = climbStairs(n - 1) + climbStairs(n - 2);
        } 
        return result.at(n);
    }
};

int main()
{
	Solution s;
	std::cout<<s.climbStairs(5);
}
