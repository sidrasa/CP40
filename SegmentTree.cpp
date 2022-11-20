#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e5+5;
int t[4*N];

void build(int rootInd=1,int left=0,int right=n-1){
    if(left==right){
        t[rootInd]=a[left];
    }
    else{
        int mid=(left+right/2);
        build(rootInd*2,left,mid);//left
        build(rootInd*2+1,mid+1,right);//right
        // t[rootInd]=t[rootInd*2]+t[rootInd*2+1];
        t[rootInd]=min(t[rootInd*2],t[rootInd*2+1]);
    }
}

void update(int rootInd=1,int left=0,int right=n-1,int pos,int val){
    if(left==right){
        t[rootInd]=val;
    }
    else{
        int mid=(left+right)/2;
        if(pos<=mid)
            update(rootInd*2,left,mid,pos,val);
        else
            update(rootInd*2+1,mid+1,right,pos,val);
        // t[rootInd]=t[rootInd*2]+t[rootInd*2+1];
        t[rootInd]=min(t[rootInd*2],t[rootInd*2+1]);
    }
}

int query(int rootInd,int left,int right,int qleft,int qright){
    if((qright<left)||(qleft>right))
        return 0;
    if(qleft==left&&qright==right){
        return t[rootInd];
    }
    int mid=(left+right)/2;
    // return sum(v*2,left,mid)+sum(v*2+1,)
    return min(query(t[rootInd*2]),query([rootInd*2+1]);
}


int main()
{
    
    
    return 0;
}
