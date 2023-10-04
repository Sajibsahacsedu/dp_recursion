#include<bits/stdc++.h>
using namespace std ;
void sub(int ind , vector<int> v , vector<int> a , int n){
    if(ind==n){

        if(v.size()==0){
            cout<<"{}";
        }
        for(auto x : v){
            cout<<x <<"  " ;
        }
        cout<<endl;
        return;

    }
    v.push_back(a[ind]);
    sub(ind+1,v,a,n);
    v.pop_back();
    sub(ind+1,v,a,n);





}
int main(){
    int n = 3 ;
    vector<int> v;
    vector<int > a = {3,2,1};
    sub(0,v,a , n);






}