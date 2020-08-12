#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false)
  

using namespace std;

int main()
{
	IOS;
	cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s,s1,s2;
        cin>>s;
        
        int l = s.length();
        
        s1 = s.substr(0,l/2);
        if(l%2 ==0){
            s2 = s.substr(l/2,l/2); //intital point and length to which
        }
        else{
             s2 = s.substr(l/2 + 1,l/2); 
        }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        
        if(s1 == s2)cout<<"YES\n";
        else cout<<"NO\n";
        
    }

    

    return 0;
}
