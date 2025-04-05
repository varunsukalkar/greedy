class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int result = 0;
        f(nums,0,0,result);
        return result;
        
        
    }

    void f(vector<int> & nums , int index , int  counter , int & result ){
        if(index  == nums.size()){
            result+=counter;
            return ;
        }
        f(nums,index+1 , counter^nums[index] , result);
        f(nums,index+1 , counter , result);
    }
};