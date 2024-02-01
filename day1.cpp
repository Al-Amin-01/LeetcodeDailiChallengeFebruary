class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> v(3);
        for(int i=0;i<=n-3;){
            if(nums[i+2]-nums[i]<=k){
                v[0]=nums[i];
                v[1]=nums[i+1];
                v[2]=nums[i+2];
                ans.push_back(v);
                i+=3;
            }
            else{
                return vector<vector<int>>();
                i++;
            }
        }
        return ans;
    }
};
