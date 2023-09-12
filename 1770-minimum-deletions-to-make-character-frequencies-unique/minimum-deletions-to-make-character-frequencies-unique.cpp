class Solution 
{
public:
    int minDeletions(string s) 
    {
        map<char,int> m;
        int n=s.size();
        for(int x=0; x<n; x++) m[s[x]]++;
        vector<int> v;
        for(auto it: m) v.push_back(it.second);
        sort(v.begin(),v.end()); // 0 1 1 4
        int count=0;
        for(int x=0; x<v.size()-1; x++)
        {
            if(v[x]!=0 && v[x]==v[x+1])
            {
                int i=v[x];
                auto it=find(v.begin(),v.end(),i);
                while(it!=v.end() && i>0)
                {
                    i--;
                    it=find(v.begin(),v.end(),i);
                    count++;
                }
                v[x]=i;
            }
        }
        return count;
    }
};