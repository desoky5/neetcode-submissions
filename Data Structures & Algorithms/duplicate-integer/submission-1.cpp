class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        char flag = 0 ;
        for (int i = 0 ; i < nums.size();i++)
        {
            for (int j=0;j<nums.size();j++)
            {
                if (i != j)
                {
                    if (nums[i]==nums[j])
                    {
                        flag++;
                    }
                }
            }
        }
        if (flag !=0)
        {
            return true ;
        }
        else 
        {
            return false ;
        }
        
    }
};