#include <iostream>
#include<algorithm>


using namespace std;
int maximizeGreatness(vector<int>& nums) {
    int res = 0;
    sort(nums.begin(), nums.end(), greater<int>());
    int i = 0, j = 1;
    while (j != nums.size()) {
        if (nums[i] > nums[j]) {
            i++;
            j++;
            res++;
        }
        else j++;
    }
    return res;

}
int main(){

}