#include<bits/stdc++.h>
#define ll long long
#define cp() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    cp();
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<"\n";
            continue;
        }
        int a=abs(x%2);
        int b=abs(y%2);
        
        if(a==b){
            if(x<y){
                cout<<(y-x)/2<<"\n";
                continue;
            }
            else{
                cout<<x-y<<"\n";
                continue;
            }
        }
        else {
            if(x<y){
                cout<<(((y+1)-x)/2)+1<<"\n";
                continue;
            }
            else{
                cout<<y-x<<"\n";
            }
        }
    }
    return 0;
}
