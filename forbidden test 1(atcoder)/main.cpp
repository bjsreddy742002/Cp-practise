#include <iostream>
#include <map>
#include <climits>
using namespace std;
int main()
{
  map<int,int> h;

    int x,n;
    cin>>x>>n;
    if(n==0)
    {
        cout<<x<<endl;
    }
    else if(n!=0)
    {
    for(int i=0;i<n;i++)
    {
        int k;cin>>k;
        h[k]=1;
    }
    int num=0,od=INT_MAX,cd=INT_MAX;
    for(int i=0;i<102;i++)
    {
        if(h[i]==0)
        {
            cd=(x>i)?x-i:i-x;
            if(cd<od)
            {
                od=cd;
                num=i;
            }

        }
    }
    cout<<num<<endl;


    }
   return 0;
}
