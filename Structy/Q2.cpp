//
// Created by abel_ on 10-09-2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {
            {'d','b','i'},
            {'c','e','g'},
            {'a','h','f'}
    };

//    print the array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    bool end = false;
    int i = 0;
    int j = 2;
    int steps = 1;
//   maintain a tuple of (i,j) in a queue
    vector<pair<int,int>> q;
//  create a character array to store the characters
    vector<char> result;

    result.push_back(arr[i][j]);
    q.push_back(make_pair(i,j));
    while(!end){
        if(i >= 0 && j >= 0 && !q.empty()) {
//            check if i,j is in the queue
            if (find(q.begin(), q.end(), make_pair(i, j)) != q.end()) {
                if (arr[i + 1][j] == arr[i][j] + 1) {
                    i++;
                } else if (arr[i][j + 1] == arr[i][j] + 1) {
                    j++;
                } else if (arr[i - 1][j] == arr[i][j] + 1) {
                    i--;
                } else if (arr[i][j - 1] == arr[i][j] + 1) {
                    j--;
                }else if (arr[i-1][j-1] == arr[i][j] + 1){
                    i--;
                    j--;
                }else if (arr[i-1][j+1] == arr[i][j] + 1){
                    i--;
                    j++;
                }else if (arr[i+1][j-1] == arr[i][j] + 1){
                    i++;
                    j--;
                }else if (arr[i+1][j+1] == arr[i][j] + 1){
                    i++;
                    j++;
                }else{
                    end = true;
                    break;
                }
                q.push_back(make_pair(i, j));
                result.push_back(arr[i][j]);
                steps++;
            }
        }
    }
    cout << steps << endl;
//    print the vector of tuples
    for(auto i : q){
        cout << i.first << " " << i.second << endl;
    }
//    print the result
    for(auto i : result){
        cout << i << " ";
    }
    return 0;
}
