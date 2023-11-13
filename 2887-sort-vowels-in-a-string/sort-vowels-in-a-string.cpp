class Solution {
public:
    string sortVowels(string s) {
        string ans="";
        vector<char> arr;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                ans.push_back(arr[count]);
                count++;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};