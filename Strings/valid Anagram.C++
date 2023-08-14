class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        //check length is equal or not.
        if(n!=m){
            return false;
        }

        //create un_map and store the elements of both strings.
        /*increase the key vlaue of string 1 and decrease the key 
        value of string 2*/
        unordered_map<char, int>count_key;
        for(int i=0; i<n; i++){
            count_key[s[i]]++;
            count_key[t[i]]--;
        }
        // if all the key vlaue is zero then it is anagram
        for(auto count:count_key){
            if(count.second){
                return false;
            }
        }
        return true;
    }
};
