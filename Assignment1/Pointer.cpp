#include<bits/stdc++.h>
 using namespace std;

 void update(int *pa, int *pb){
     int x = *pa + *pb;
     int y = abs(*pa - *pb);

     *pa = x;
     *pb = y;

 }

 int main(){

     int a, b;
     int *pa = &a, *pb = &b;

     cin>>a>>b;
     update(pa, pb);

     cout<<a<<endl<<b;
     return 0;
 }
