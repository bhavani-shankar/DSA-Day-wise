#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
 //    	freopen("input.txt", "r", stdin);
 //    	freopen("output.txt", "w", stdout);
	// #endif
    
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            int temp=a[n-1];
            int b[n]={0};
            for(int i=n-1;i>=0;i--){
                if(temp!=0||a[i]!=0){
                    b[i]=1;
                    temp=max(temp,a[i]);
                    temp--;
                }
                else{
                    temp=a[i];
                }
            }
            for(int i=0;i<n;i++)
                cout<<b[i]<<" ";
            cout<<endl;
        }

   return 0;
    }





