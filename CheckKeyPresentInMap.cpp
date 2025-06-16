#include<bits/stdc++.h>

using namespace std;
/* Program to check given key is present in the map or not*/

int main()
{
   std::map<int,int> map;
   
   map.insert({1, 10});
   map.insert({2, 20});     
   map.insert({3, 30});
   map.insert({4, 40});

    int key = 3;

    if(map.find(key) == map.end())
    {
        cout<<"Key " << key << " is not present in the map." << endl;
    }
    else
    {
        cout << "Key " << key << " is present in the map with value: " << map[key] << endl;
    }

    cout<< "Iterating through the unordered_map:" << endl;
    std::unordered_map<int,int> umap;

    umap.insert({1, 10});   
    umap.insert({2, 20});
    umap.insert({3, 30});
    umap.insert({4, 40});   

    for(auto &it :umap)
    {
       // it.first +=2;
        it.second +=2;
        cout<<"\n key "<<it.first <<" value "<<it.second;
    }

    return 0;
}
