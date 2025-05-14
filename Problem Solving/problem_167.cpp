#include<iostream>
using namespace std;
#include <vector>


vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        int res = numbers[i] + numbers[j];
        vector<int> v;
        while (res != target) {
                if (res < target) {
                        i++;
                        res = numbers[i] + numbers[j];
                }
                else {
                        j--;
                        res = numbers[i] + numbers[j];
                }
        }
        v.push_back(i + 1);
        v.push_back(j + 1);
        return v;

}

int main() {

}