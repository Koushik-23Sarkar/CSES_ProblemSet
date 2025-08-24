#include<bits/stdc++.h>
using namespace std;
// Map for Mapping in sorting order (using Red-black trees)
// Insert: O(logN)
// String as key will store in Lexicographical Order (Dictionary Order)
int main(){
    map<int,string>mp;
    mp[1]="abc";
    mp[4]="bhu";
    mp.insert({2,"tyu"});

    // Traverse the Map;
    map<int,string>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    //Traverse the Map
    for(auto &pr:mp){      //N*O(logN)
        cout<<it->first<<" "<<it->second<<endl;
    }

    // default value of INT in Map: 0
    // default value of String in Mao: "" (empty string)


    // Find
    auto it2 = mp.find(2);  //O(logN)  // Return iterator of the element if it exist, if not then, return end of the mp;
    if(it == mp.end()){
        cout<<"NO Value";
    }else {
        cout<<it->first<<" "<<it->second<<endl;
    }


    //Erase
    mp.erase(it2);  //If element is not present then, give you error.

    //size
    cout<<mp.size();

    mp.clear();
    return 0;
}
