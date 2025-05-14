#include <iostream>
#include<algorithm>


using namespace std;

int prefixCount(vector<string>& words, string pref) {
    int count = 0;
    for (const string word : words) {
        if (word.starts_with(pref)) {
            count++;
        }
    }
    return count;
}
int main(){

}