class Solution {
public:
    bool fun(unordered_map<char,int> have, unordered_map<char,int> need) {
        for(auto i: need){  //run through the hashmap
            char c = i.first;   //key
            int fneed = i.second;   //value
            int fhave = have[c];    //checked from have hashmap
            if( fhave < fneed ) return false;
        }
        return true;
    }
    bool canConstruct(string ransomNote, string magazine) {    
        unordered_map<char,int> have;
        unordered_map<char, int> need;
        for(int i =0; i<ransomNote.size(); i++){
            need[ransomNote[i]]++;
        }
        for(int i=0; i<magazine.size(); i++){
            have[magazine[i]]++;
        }
        return fun(have,need);
    }
};