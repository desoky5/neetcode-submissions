class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        vector<int> right(nums.size());
        for (int i = 0 ; i < nums.size();i++)
        {
            if(i==0)
			{
			result[0]=1;
			}
			else
			{
			result[i] = result[i-1]*nums[i-1];
			} 
        }
		for (int i = nums.size()-1 ; i >= 0;i--)
        {
            if(i==nums.size()-1)
			{
			right[nums.size()-1]=1;
			}
			else
			{
			right[i] = right[i+1]*nums[i+1];
			} 
        }
		for(int i = 0 ; i < nums.size();i++)
		{
			result[i] = right[i]*result[i];
		}
        return result ;
    }
};
