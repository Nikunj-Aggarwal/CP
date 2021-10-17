class Solution {
public:
    vector<vector<int>> ans;
    void permu (vector<int> nums, vector<int> &m, vector<int> &v) {
        int c = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == 1) {
                c++;
            }
        }
        if(c == v.size()){
            ans.push_back(m);
            return;
        }
        int n = nums.size();
        for (int i = 0; i < n;i++) {
            if(v[i] == -1) {
                int x = nums[i];
                v[i] = 1;
                m.push_back(x);
                permu(nums,m,v);
                v[i] = -1;
                m.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) { 
        int n = nums.size();
        vector<int> vis(n,-1);
        vector<int> m;
        for (int i = 0; i < n;i++) {
            int x = nums[i];
            vis[i] = 1;
            m.push_back(x);
            permu(nums,m,vis);
            vis[i] = -1;
            m.pop_back();
        }
        return ans;
    }
};
