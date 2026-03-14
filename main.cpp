#include<iostream>
#include<vector>
using namespace std;

int main(){

    cout << endl;

    // vector<int> firstArr = {10,20,30,40,50};

    // // for(int i=0; i<5; i++){
    // //     cout << firstArr[i] << " ";
    // // }

    
    // // firstArr.push_back(60);
    // firstArr.pop_back();
    
    // for(int i : firstArr){
    //     cout << i << " ";
    // }
    // cout << firstArr.size();


    vector<int> heights = {0,1,2,3,4,5,2,0};

    int max = heights[0];

    for(int i=0; i<heights.size(); i++){
        if(heights[i] > max){
            max = heights[i];
        }
    }

    cout << max;



    cout << endl;

    return 0;
}