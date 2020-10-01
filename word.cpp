#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int upper=0;
    int lower=0;
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (isupper(str[i]))
        {
            upper += 1;
        }
        else
        {
            lower += 1;
        }
    }
    if(upper>lower){
        transform(str.begin(),str.end(),str.begin(),::toupper);
        cout<<str<<endl;
    }
    else if(upper<lower){
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }
    else{
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }
    return 0;
}