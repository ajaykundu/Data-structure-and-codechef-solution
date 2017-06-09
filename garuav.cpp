#include <iostream>
using namespace std;
int main(void) {
 int t;
 cin>>t;

 for(int o=0;o<t;o++){
     int o1,o2;
     cin>>o1>>o2;
     int arr[o1*o2];
     long long sum[o1*o2];
     for(int i=0;i<o1*o2;i++){
         cin>>arr[i];
         if(i!=0)
         sum[i] = sum[i-1] + arr[i];
         else
         sum[i] = arr[i];
     }
     int c=0;
     int j;
     for(int i=0;i<o2;i++){
         c=0;
         for(j=i;j+o2-1<o1*o2;j=j+o2){
             if(j-1>=0 && sum[j+o2-1] - sum[j-1] > o2/2){
                 c++;
             }
             else if(j-1<0 && sum[j+o2-1]> o2/2){
                 c++;
             }
          }
         if(c > o1/2){
             cout<<"1\n";
             goto end;
         }
         else if(c == o1/2){
             int x = j;
             int y = o2 - (o1*o2- x);
             if(x!=o1*o2  && (sum[o1*o2-1] - sum[x] + sum[y-1] > o1/2)){
                 cout<<"1\n";
                 goto end;
             } 
         }
     }
     cout<<"0\n";
    end:
    cout<<"";
 }
 return 0;
}