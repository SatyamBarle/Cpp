#include <iostream>
#include <vector>

using namespace std;

int countBits(unsigned int num) {  
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;  
    }
    return count;
}

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int a[nums.size()];
        for (int i = 0; i < nums.size(); i++) {
            a[i] = countBits(nums[i]);
        }

        for (int j = 0; j < nums.size() - 1; j++) { 
            if (a[j] == a[j + 1]) {
                swap(nums[j], nums[j + 1]);
            } else {
                return false;
            }
        }

        return true;  
    }
};

int main() {
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    cout << s.canSortArray(nums) << endl;  
    return 0;
}
