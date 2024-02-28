#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        for(int i=0;i<nums.size();i++){
        if(i<nums.size()-1){
            nums[i]=nums[i+1];
        }
        else{
            nums[0]=nums[i];
        }
    }}
};
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    Solution s;
     s.rotate(nums,k);
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    return 0;

}