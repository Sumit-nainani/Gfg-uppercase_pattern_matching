/*Given a dictionary of words where each word follows CamelCase notation, print all words (in lexicographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.

Example: GeeksForGeeks matches the pattern "GFG", because if we combine all the capital letters in GeeksForGeeks they become GFG.

CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include PowerPoint and Wikipedia, GeeksForGeeks, CodeBlocks, etc.
*/

/* approach:
    we will simply iterate over dictionary vector and character by character we will check each string and compare with pattern
    string and one more thing we will store a count of uppercase letters of each string in dictionary and count value is eqaul to
    the length of pattern and we find the all uppercase letters of pattern in the current dict. string then push this string in our
    answer.
*/
#include<bits/stdc++.h>

class Solution{
    public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string pattern) {
        // code here
        vector<string> ans;  // storing for answers
        int n=pattern.size();
        for(int i=0;i<N;i++){
            int x=Dictionary[i].size();
            int j=0,k=0;
            int ct(0);
            while(k<n && j<x){
                if(Dictionary[i][j]>='A' && Dictionary[i][j]<='Z') ct++;
                if(pattern[k]==Dictionary[i][j]){
                    k++;j++;
                }else j++;
            }
            if(k==n && ct==n) ans.push_back(Dictionary[i]);
        }
        if(ans.empty()) ans.push_back("-1");
        return ans;
    }
};


