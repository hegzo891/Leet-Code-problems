//
// Created by Ahmed Hegazy on 14/05/2025.
//
#include <iostream>
using namespace std;

int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max = 0;
        while(i < j){
                if (min(height[i], height[j]) * (j - i) > max) {
                    max = min(height[i], height[j]) * (j - i);
                }
            if (height[i] < height[j]) {
                    i++;
                } else {
                    j--;
                }
}
    return max;
}
int main(){

}