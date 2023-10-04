#include<bits/stdc++.h>
using namespace std ;
void sub(int ind , vector<int> v , vector<int> a , int n , int s , int sum){
    if(ind==n){

        if(s == sum ){
        for(auto x : v){
            cout<<x <<"  " ;
        }
        cout<<endl;
        
        }
        return ;
    }
    v.push_back(a[ind]);
    s+=a[ind];
    sub(ind+1,v,a,n,s,sum);
    v.pop_back();
    s-=a[ind];
    sub(ind+1,v,a,n,s,sum);





}
int main(){
    int n = 3 ;
    vector<int> v;
    int sum = 2;
    vector<int > a = {2,1,1};
    sub(0,v,a , n,0,sum);






}