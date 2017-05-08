#include <iostream>

using namespace std;
 void displaypathtoprinces(int N,char a[][10])
{
  char positionofprinces;
    int steptomove;
    cout<<"enter the size of grid....";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            a[i][j]='-';      }
        cout<<endl;
    }
     for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   label: cout<<"enter the corner where princes is catched out of four corners a,b,c,d....";
    cin>>positionofprinces;
    switch(positionofprinces)
{
        case 'a' :  a[0][0]='p'; break;
        case 'b' :  a[0][N-1]='p'; break;
        case 'c' :  a[N-1][0]='p'; break;
        case 'd' :  a[N-1][N-1]='p'; break;
         default :  goto label;
    }
    a[N/2][N/2]='m';
 for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    steptomove=N-1;
    cout<<"no. of moves to be move....."<<steptomove<<endl;
     switch(positionofprinces)
{
        case 'a' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"up-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"left-";
        }; break;

        case 'b' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"up-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"right-";
        }; break;

        case 'c' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"down-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"left-";
        }; break;

        case 'd' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"down-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"right-";
        }; break;
         default :  goto label;
    }
}

int main()
{
    int N;
    char a[10][10];
    displaypathtoprinces(N,a);
   /* char positionofprinces;
    int steptomove;
    cout<<"enter the size of grid....";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            a[i][j]=45;      }
        cout<<endl;
    }
     for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   label: cout<<"enter the corner where princes is catched out of four corners a,b,c,d....";
    cin>>positionofprinces;
    switch(positionofprinces)
{
        case 'a' :  a[0][0]='p'; break;
        case 'b' :  a[0][N-1]='p'; break;
        case 'c' :  a[N-1][0]='p'; break;
        case 'd' :  a[N-1][N-1]='p'; break;
         default :  goto label;
    }
    a[N/2][N/2]='m';
 for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    steptomove=N-1;
    cout<<"no. of moves to be move....."<<steptomove<<endl;
     switch(positionofprinces)
{
        case 'a' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"up-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"left-";
        }; break;

        case 'b' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"up-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"right-";
        }; break;

        case 'c' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"down-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"left-";
        }; break;

        case 'd' :  for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"down-";
        }
        for(int i=1;i<=steptomove/2;i++)
        {
            cout<<"right-";
        }; break;
         default :  goto label;
    } */

    return 0;
}




