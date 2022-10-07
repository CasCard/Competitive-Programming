//
// Created by abel_ on 14-09-2022.
//
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>

std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
    // todo,
    std::array<int, 2> pairs;
    for(int i : numbers){
        int reminder = target - i ;
        std::vector<int>::iterator it;
        it = std::find(numbers.begin(),numbers.end(),reminder);
//
        if(it != numbers.end() and std::distance(numbers.begin(),it) != std::distance(numbers.begin(),std::find(numbers.begin(),numbers.end(),i))){
            pairs[0] = std::distance(numbers.begin(),std::find(numbers.begin(),numbers.end(),i));
            pairs[1] = std::distance(numbers.begin(),it);
            return pairs;
        }
//            get the index of i
        }

    return pairs;
}

int main(){
    std::vector<int> numbers = {9,9};
    int target = 18;
    std::array<int, 2> result = pairSum(numbers,target);
    for(int i=0;i<result.size();i++){
        std::cout << result[i] << " ";
    }
    return 0 ;
}