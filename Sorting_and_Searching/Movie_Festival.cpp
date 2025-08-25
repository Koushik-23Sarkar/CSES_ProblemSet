#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    vector<pair<int,int>> arr(testCase);
    for(int i=0;i<testCase;i++){
        int start,end;;
        cin>>start>>end;

        arr[i].first=end;
        arr[i].second=start;

    }

    // start task
    sort(arr.begin(),arr.end());  // more less ending time, more movie i can watch.
    int i,j;
    i=0;
    j=1;
    int count=1;
    while(j<testCase){
        if(arr[i].first<=arr[j].second){    //we can start the new movie, only when we new movie's start time is greater then old movie end. (otherwise, movies will intersect.)
            i=j;
            count++;
        }
        j++;
    }

    cout<<count;
    return 0;
}