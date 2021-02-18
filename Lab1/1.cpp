#include<bits/stdc++.h>
using namespace std;


int main() {
    double s,d,u;
    int n;
    cin>>s>>u>>d>>n;
    vector<double> q1,q2;
    q1.push_back(s);
    cout<<setprecision(6)<<fixed<<q1[0]<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0){
            q2.clear();
            for(int j=0;j<(int)q1.size();j++){
                q2.push_back(u*q1[j]);
                q2.push_back(d*q1[j]);
            }
            for(int j=0;j<(int)q2.size();j++){
                cout<<setprecision(6)<<fixed<<q2[j]<<" ";
            }
        }
        else{
            q1.clear();
            for(int j=0;j<(int)q2.size();j++){
                q1.push_back(q2[j]*u);
                q1.push_back(q2[j]*d);
            }
            for(int j=0;j<(int)q1.size();j++){
                cout<<setprecision(6)<<fixed<<q1[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

