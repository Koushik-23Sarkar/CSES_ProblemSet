#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int entryRestaurant;
        int exitRestaurant;
        cin >> entryRestaurant >> exitRestaurant;
        mp[entryRestaurant]++;  
        mp[exitRestaurant]--;
    }

    int count = 0;
    int temp = 0;
    for (auto pr : mp)
    { 
        temp+=pr.second;  //Prefix sum 
        count=max(count,temp);  // maximum among that prefix sums.
    }

    cout<<count;
    return 0;
}