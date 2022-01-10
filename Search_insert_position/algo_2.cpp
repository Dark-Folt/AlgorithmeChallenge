#include <stdlib.h>
#include <vector>



class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int debut = 0;
        int fin = nums.size() - 1;
        int mid;

        while (debut <= fin) {
            mid = (debut + fin) / 2;
            if (target > nums[mid]) {
                debut = mid + 1;
            }else if (target < mid) {
                fin = mid - 1;
            }else{
                return mid;
            }
        }


        return debut;
    }
};


using namespace std;

int main() {
    Solution s;
    std::vector<int> nums = {1, 3, 5, 6};
    int ans = s.searchInsert(nums, 2);
    printf("l'indice est: %d\n", ans);

    return 0;
}
