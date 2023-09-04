
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        nums.push_back(-1);
        int n = nums.size();
        int gg=0,ans=0;
        int count=1;
        int i;
        for( i = 0 ; i < nums.size()-1 ; i++){ 
            if(nums[i] == nums[i+1]){
                count++;
            }
            else{
                if(count>gg){ 
                    ans = nums[i];
                    gg = count;
                }
                count=1;
            }
        }
        // if(count>gg) ans=nums[i];
        return ans;
    }
};