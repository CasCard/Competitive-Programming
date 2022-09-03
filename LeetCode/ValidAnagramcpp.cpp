//
// Created by abel_ on 03-09-2022.
//

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s,string t){
    if(s.length() != t.length()) return false;
    vector<int> freq(26,0);
    //    print the freq array
    for(int i=0;i<s.length();i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int i=0;i<26;i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    if(isAnagram(s,t)){
        cout << "Strings are anagrams";
    }else{
        cout << "Strings are not anagrams";
    }
    return 0;
}
