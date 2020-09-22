#include<bits/stdc++.h>
using namespace std;
int countWindows(int building,int window){
    int product=0;
    while(window!=0){
        product+=building;
        window--;
    }
    return product;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<countWindows(n,m);
	return 0;
}