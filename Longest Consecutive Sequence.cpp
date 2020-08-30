class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0)
	return 0;
int m=1,r=1,a=0;
sort(nums.begin(),nums.end());
a=nums[0];
for(int i=1;i<nums.size();i++)
{
	if(nums[i]-a==1)
	{
		r++;
		m=max(m,r);
	}
	else if(nums[i]!=a)
		r=1;
	a=nums[i];
}
return m;   
    }
};