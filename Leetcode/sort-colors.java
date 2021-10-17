class Solution {
    public void sortColors(int[] nums) {
        int n = nums.length;
        int start = 0;
        int mid = 0;
        int end = n - 1;
        
        while( mid <= end && end > start){
 
             if(nums[mid] == 2 && mid <= end){
                 if (nums[end] == 2) {
                     end--;
                     continue;
                 }
                 nums[mid] = nums[end];
                 nums[end] = 2;
                 if(nums[mid]==1 || mid == start || mid == end){
                     mid++;
                 }
                 end--;

             }else if(nums[mid] == 0 && start <= mid){
                 if (nums[start] == 0) {
                     start++;
                     continue;
                 }
                 nums[mid] = nums[start];
                 nums[start] = 0;
                if(nums[mid]==1 || mid == start || mid == end){
                     mid++;
                 }
                 start++;
                 // mid++;
                 

             }else{
                 mid++;
             }
        }
        
    }
}
