class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> inset;
        for(int num:nums){
            
             if(inset.find(num) != inset.end()){
                return true;
            }inset.insert(num);
        
        }return false;
        
    }
};
