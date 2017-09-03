#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n][k];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                arr[i][j]=0;
            }
        }

        for(int i=0;i<n;i++)
        {
            int size;cin>>size;

            for(int j=0;j<size;j++)
            {
                int num; cin>>num;

                 arr[i][num-1]=1;
            }
        }

        // for(int i=0;i<n;i++)
        // {  cout<<"the values are:";
        //     for(int j=0;j<k;j++)
        //     { 
        //         if(arr[i][j]==1)
        //         {
        //             cout<<j+1<<" ";
        //         }
        //     }
        //     cout<<endl;
        // }


        int anscounter=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {   
                int numcounter=0;

                for(int tu=0;tu<k;tu++)
                {
                        if(arr[i][tu]==1 || arr[j][tu]==1)
                        {
                            numcounter++;
                        }else
                        break;
                }
                if(numcounter==k)
                {
                    anscounter++;
                }
            }
        }

        cout<<anscounter<<endl;
    }
    return 0;
}