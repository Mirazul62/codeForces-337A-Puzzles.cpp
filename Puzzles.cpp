#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,a[100000],max=0,d=0,k;
    cin>>n>>m;
    for(i=0;i<m;i++)
        cin>>a[i];

    sort(a,a+m);

    k=n-1;
    max=a[k]-a[0];
        for(i=0;i<m;i++)
        {
           for(j=i+n-1;j<m;j++)
           {
               d=a[j]-a[i];
                /// cout<<a[i]<<" "<<a[j]<<" "<<d<<endl;
                 if(d<max)
                    max=d;
               ///  cout<<max;

                 }

           }

        cout<<max;
      ///  cout<<d;

}
