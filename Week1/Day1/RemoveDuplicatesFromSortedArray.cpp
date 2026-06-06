class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n = nums.size();
        for(int i=0;i<k;i++){
          for(int j=i+1;j<k;j++)  
             if(nums[j] != nums[i]) {
               i++;
               nums[i] = nums[j];
}
            
            }
        
        
    } return 0;
};
