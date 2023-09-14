#include <bits/stdc++.h>
using namespace std;


int main(){
    char dir;
    int x,y,z;
    string cmd;
    
    cout<<"Enter starting coordinates (space separated (x,y,z)):"<<endl;
    cin>>x>>y>>z;
    cout<<"Enter start face direction (N,S,E,W,U,D)"<<endl;
    cin>>dir;
    cout<<"Enter commands to be implemented (continuous)";
    cin>>cmd;

    cout<<"Facing Direction: "<<dir<<endl;
    cout<<"Starting Coordinates: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    cout<<"Commands: "<<cmd<<endl;
    




    return 0;
}