class Solution {
public:
    int countVowelPermutation(int n) {
        long a=1,e=1,i=1,o=1,u=1;
        long mod=1000000007;
        long an,en,in,on,un; 
        for(int k=1;k<n;k++){
            an=e% mod;
            en=(a+i)%mod;
            in=(a+e+o+u)%mod;
            on=(i+u);
            un=(a)%mod;
            a=an,e=en,i=in,o=on,u=un;
        }
        return (a+e+i+o+u)%mod;
    }
};