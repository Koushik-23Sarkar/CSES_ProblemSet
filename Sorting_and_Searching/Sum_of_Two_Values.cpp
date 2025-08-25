#include <bits/stdc++.h>
using namespace std;


pair<int,int> sumOfTwoValues(vector<pair<int,int>> &arr,int target){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int start=0;
    int end=n-1;
    while(start<end){
        int sum = arr[start].first+arr[end].first;
        if(sum ==target){
            return {start,end};
        }
        else if (sum<target)
        {
            start++;
        }
        else if (sum>target)
        {
            end--;
        }
        
    }

    return {-1,-1};
}


int main(){
    int n;
    int target;
    cin>>n>>target;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i].first=temp;
        arr[i].second=i;
    }   

    
    // Start Task
    pair<int,int> answer = sumOfTwoValues(arr,target);
    if(answer.first != -1){
        cout<<arr[answer.first].second+1<<" "<<arr[answer.second].second+1;
    }else{
        cout<<"IMPOSSIBLE";
    }
    return 0;
}