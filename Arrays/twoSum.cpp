#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &arr,int target) {
    unordered_map<int,int> mpp;// stores arr  elements and its index

    for(int i=0;i<arr.size();i++) {
        int num = arr[i];
        //If remaining exists then we can say num + remaining = target
        int remaining = target - num;
        //checking if remaining exists
        if(mpp.find(remaining)!=mpp.end()) {
            return {mpp[remaining],i};
        }
        //storing num and its index in map
        mpp[num] = i;
    }
    //If no pair exists
    return {};
}

int main() {
    vector<int> arr = {2, 5, 10, 17};
    int target = 12;

    vector<int> ans = twosum(arr,target);

    if(!ans.empty()) {
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    else {
        cout<<"Target Not found"<<endl;
    }
    return 0;
}
