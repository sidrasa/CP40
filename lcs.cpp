#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int rec(string s1,string s2,int n1,int n2){
        if(n1==0||n2==0){
            return 0;
        }
        int ans=0;
        if(s1[n1-1]==s2[n2-1]){
            ans=rec(s1,s2,n1-1,n2-1)+1;
        }
        else{
            ans=max({rec(s1,s2,n1-1,n2),rec(s1,s2,n1,n2-1),rec(s1,s2,n1-1,n2-1)});
        }
        return ans;
    }
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[x+1][y+1];
        for(int n1=0;n1<=x;n1++){
            for(int n2=0;n2<=y;n2++){
                int ans;
                if(n1==0||n2==0){
                    ans=0;
                }
                else if(s1[n1-1]==s2[n2-1]){
                    // ans=rec(s1,s2,n1-1,n2-1)+1;
                    ans=dp[n1-1][n2-1]+1;
                }
                else{
                    // ans=max({rec(s1,s2,n1-1,n2),rec(s1,s2,n1,n2-1),rec(s1,s2,n1-1,n2-1)});
                    ans=max({dp[n1-1][n2],dp[n1][n2-1],dp[n1-1][n2-1]});
                }
            }
        }
    }


int main()
{
    
    
    return 0;
}
