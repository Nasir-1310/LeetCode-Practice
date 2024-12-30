#include<bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    map<string,int>frequency_count;
    for(string res: strings){
        frequency_count[res]++;
    }

    
      
    vector<int>query_count(queries.size());
    // for(int i=0;i<queries.size();i++)
    //     cout<<queries[i]<<" ";
    //   cout<<"\n";
    
    for(int i=0;i<queries.size();i++)
    {
        query_count[i]=frequency_count[queries[i]];
        // query_count.push_back([queries[i]]);
    }
    return query_count;

}

int main()
{
    vector<int>ans=matchingStrings({"ab","abc","ab","abcd"},{"ab","abc","abcdef"});
    for(int res: ans)
        cout<<res<<" ";

}
