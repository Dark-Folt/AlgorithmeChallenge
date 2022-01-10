


#include <stdlib.h>
#include <vector>



using namespace std;



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int mid = n/2;
        int i;
        
        if (target < nums[mid]) {
            for(i=0; i <= mid; i++){
                if (nums[i] >= target) {
                    return i;
                }
            }
        }else{
            for(i=mid; i < n ; i++){
                if (nums[i] >= target) {
                    return i;
                }
            }
        }
            
        return n;
    }
};


int main() {
    vector<int> arr = {1, 3, 5, 6};

    Solution s;
    int ans = s.searchInsert(arr, 2);
    printf("L'indice est: %d\n",ans); 
    return 0;
}
