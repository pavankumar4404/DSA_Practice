#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    bool equal(int orig[],int ana[]){
        for(int i=0;i<26;i++){
            if(ana[i]!=orig[i]) return false;
        }
        return true;
    }
    
    
	int search(string pat, string txt) {
	    // code here
	    int n=txt.length();
	    int m=pat.length();
	    int ans=0;
	    int i=0;
	    int j=0;
	    int orig[26]={0};
	    int ana[26]={0};
	    int cnt=pat.length();
	    for(auto i:pat){
	        ana[i-'a']++;
	    }
	    
	    for(int i=0;i<m;i++){
	        orig[txt[i]-'a']++;
	    }
	    
	    if(equal(orig,ana)) ans++;
	    
	    for(int j=m;j<n;j++){
	        orig[txt[j-m]-'a']--;
	        
	        orig[txt[j]-'a']++;
	        
	        if(equal(orig,ana)) ans++;
	        
	    }
	    return ans++;
	}

};

int main() {
    Solution solution;

    // Test the function with different inputs
    string pattern = "abc";
    string text = "ababcabcabc";

    int result = solution.search(pattern, text);

    cout << "Occurrences of anagrams: " << result << endl;

    return 0;
}