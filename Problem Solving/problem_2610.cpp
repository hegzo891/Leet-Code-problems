#include <iostream>
using namespace std;
#include <vector>


#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
    const int maxVal = *max_element(nums.begin(), nums.end());
    vector<int> arr(maxVal + 1, 0);

    for (int i : nums) {
        arr[i]++;
    }

    vector<vector<int>> res;

    while (*max_element(arr.begin(), arr.end()) != 0) {
        vector<int> v;
        for (int i = 0; i <= maxVal; ++i) {
            if (arr[i] > 0) {
                v.push_back(i);
                arr[i]--;
            }
        }
        res.push_back(v);
    }

    return res;
}

int main() {

}