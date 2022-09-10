//
// Created by abel_ on 10-09-2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int slider = 4;
    int numberOfSliders = n - slider + 1;
    int sum = 0;

    unordered_map<int,int> map;

    for(int i = 0 ; i < numberOfSliders ; i++){
        for(int j = i ; j < i + slider ; j++){
//            find the element with frequency 1
            if(map.find(arr[j]) == map.end()){
                map[arr[j]] = 1;
            }else{
                map[arr[j]]++;
            }
        }
        for(auto i : map){
            cout << i.first << " " << i.second << endl;
            if(i.second == 1){
                sum += 1;
            }
        }
        map.clear();
        cout << endl;
    }



    cout << sum << endl;
    return 0;
}