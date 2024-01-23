#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        // unordered_map<int,int> mp;
        vector<int>freq(26,0);
        int n=word.length();
        for(int i=0;i<n;i++){
            freq[(word[i]-'a')]++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        
        long long ans=0;
        int cnt=1;
        for(int i=0;i<26;i+=8){
            for(int j=i;(j<i+8 && j<26);j++){
                ans+=(freq[j]*cnt);
            }
            cnt++;
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage:
    std::string inputWord = "axltaiwutdykakybdctmgzriejugumjumklfmryvtozdfjbvvo";
    int result = solution.minimumPushes(inputWord);

    std::cout << "Minimum Pushes for the word '" << inputWord << "': " << result << std::endl;

    return 0;
}