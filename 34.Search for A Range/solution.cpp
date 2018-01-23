class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret;
        ret.push_back(-1);
        ret.push_back(-1);

        int l,r,m=0,t=-1,i,pm=-1;
        l=0;
        r=nums.size()-1;
        while(l<r && nums[l]<target && nums[r]>target && r!=1)
        {
            m=(l+r)/2;
            if(m==pm)
                break;
            pm=m;
            if(nums[m]<target)
                l=m;
            else if(nums[m]>target)
                r=m;
            else break;
        }

        if(nums.size()>0)
        {
            if(nums[l]==target)
                t=l;
            if(nums[r]==target)
                t=r;
            if(nums[m]==target)
                t=m;

            if(t>=0)
            {
                for(i=t;nums[i]==target && i>=0;i--);
                ret[0]=i+1;
                for(i=t;nums[i]==target && i<nums.size();i++);
                ret[1]=i-1;
            }   
        }

        return ret;
    }
};