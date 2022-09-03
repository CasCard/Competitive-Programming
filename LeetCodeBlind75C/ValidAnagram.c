//
// Created by abel_ on 03-09-2022.
//

#include <stdio.h>
#include <stdlib.h>

int isAnagram(char *s,char *t){
    int freq[26] = {0};
    int i = 0;
    while(s[i] != '\0'){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
        i++;
    }
    for(int i=0;i<26;i++){
        if(freq[i] != 0) return 0;
    }
    return 1;
}