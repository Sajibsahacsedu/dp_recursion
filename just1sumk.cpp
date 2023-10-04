#include<bits/stdc++.h>
using namespace std ;
bool sub(int ind , vector<int> v , vector<int> a , int n , int s , int sum){
    if(ind==n){

        if(s == sum ){
        for(auto x : v){
            cout<<x <<"  " ;
        }
        cout<<endl;
        return true ;
        }
         else return false ;
    }
    v.push_back(a[ind]);
    s+=a[ind];
   if(sub(ind+1,v,a,n,s,sum) ==true ){
    return true ;
   }
    v.pop_back();
    s-=a[ind];
    if(sub(ind+1,v,a,n,s,sum) == true ){
 return true ;
    }

 return false;



}
int main(){
    int n = 3 ;
    vector<int> v;
    int sum = 3;
    vector<int > a = {2,1,1};
    sub(0,v,a , n,0,sum);






}