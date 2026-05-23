class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,maxfrq=0,maxlen=0;
        unordered_map<char,int>mp;
        while(j < s.length()){
            mp[s[j]]++;
            maxfrq = max(maxfrq,mp[s[j]]);
            while( (j-i+1)-maxfrq > k){
                mp[s[i]]--;
                i++;
            }
            maxlen = max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};
