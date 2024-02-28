#include<iostream>
#include<vector>
using namespace std ;


class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
             for(int j=i+1;j<nums.size();j++){
                 for(int k=j+1;i<nums.size();k++){
                     int sum=nums[i]+nums[j]+nums[k];
                     if(sum>result){
                         result=sum;
                     }
                     
                 }
                 
             }
            
        }
        cout<<result;
        
        
    }

};
int main(){
    vector<int> nums;
    int n;
    cin>>n;
for(int i=0;i<n;i++){
    cin>>nums[i];
}
    Solution s;
s.minimumCost(nums);
    return 0;
    
}