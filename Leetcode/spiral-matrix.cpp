
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int i = 0, j = 0;
    const int y = matrix.size();
    const int x = matrix[0].size();
    vector<int> ans;
    int time = 0;
    int status = 0;
    while(time < x * y){
        ans.push_back(matrix[j][i]);
        matrix[j][i] = 0;
        switch(status){
            case 0:
                if(i == x - 1 || !matrix[j][i + 1]){
                    status = (status + 1) % 4;
                    j++;
                } else {
                    i++;
                }
                break;
            case 1:
                if(j == y - 1 || !matrix[j + 1][i]){
                    status = (status + 1) % 4;
                    i--;
                } else {
                    j++;
                }
                break;
            case 2:
                if(i == 0 || !matrix[j][i - 1]){
                    status = (status + 1) % 4;
                    j--;
                } else {
                    i--;
                }
                break;
            default:
                if(j == 0 || !matrix[j - 1][i]){
                    status = (status + 1) % 4;
                    i++;
                } else {
                    j--;
                }
                break;
        }
        time++;
    }
    return ans;
}
};
