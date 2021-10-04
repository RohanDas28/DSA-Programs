//building a segmet tree for minimum values in ranges.
#include<bits/stdc++.h>
using namespace std;
int st[100];
int a[100];
void buildtree(int si, int ss, int se)
{
	if(ss == se)
	{
		st[si]=a[ss];
		return ;
	}
	
	int mid = (ss+se)/2;
	buildtree(2*si+1,ss,mid);
	buildtree(2*si+2,mid+1,se);
	st[si] = min(st[2*si+1],st[2*si+2]);
	return ;
}

int query(int qs, int qe, int ss, int se, int si)
{
	if(qe<ss || qs>se)
	return INT_MAX;
	
	if(ss>=qs && se<=qe)
	return st[si];
	
	int mid = (ss+se)/2;
	int l = query(qs,qe,ss,mid,2*si+1);
	int r = query(qs,qe,mid+1,se,2*si+2);
	return min(l,r);
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	
	buildtree(0,0,n-1);
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<query(l,r,0,n-1,0)<<endl; /*this is made for 0-indexed arrays, 
											for 1-indexed array just l-1,r-1 in place of l,r in line 52
										*/ 
	}
	
	
}