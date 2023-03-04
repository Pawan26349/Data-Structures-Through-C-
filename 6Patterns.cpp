#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter your choice : ";
    cin>>i;
    if(i==1)
    {
        int row,col;
        cout<<"Enter the number of rows you want into the pattern : ";
        cin>>row;
        cout<<"Enter the number of columns you want into the pattern : ";\
        cin>>col;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else if(i==2)
    {
        int row,col;
        cout<<"Enter the number of rows you want into the pattern : ";
        cin>>row;
        cout<<"Enter the number of columns you want into the pattern : ";
        cin>>col;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                if(i<2 || i==row)
                {
                    cout<<"*";
                }
                else
                {
                    if(j==1 || j==col)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }

                }
            }
            cout<<endl;
        } 
        
    }
    else if(i==3)
    {
        int n;
        cout<<"Enter the number : "; 
        cin>>n;
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }        
    }
    else if(i==4)
    {
        int n;
        cout<<"Enter the value : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int k=1;k<=n-i;k++)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else if(i==5)
    {
        int n;
        cout<<"Enter the value : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
    }
    else if(i==6)
    {
        int n;
        cout<<"Enter the value : ";
        cin>>n;
        int k=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<k<<" ";
                k++;

            }
            cout<<endl;
        }
    }
    else if(i==7)
    {
        int n;
        cout<<"Enter the value of the n ; ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            for(int k=1;k<=((2*n)-(2*i));k++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
            
        }
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            for(int k=((2*n)-(2*i));k>=1;k--)
            {
                cout<<"  ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    else if(i==8)
    {
        short int n;
        cout<<"Enter the value : ";
        cin>>n;
        for(int i=n;i>=1;i--)
        {
            int k=1;
            for(int j=1;j<=i;j++)
            {
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }

    }
    else if(i==9)
    {
        short int n;
        cout<<"Enter the number : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%2==1)
                {
                    if(j%2==1)
                    {
                        cout<<"1 ";
                    }
                    else
                    {
                        cout<<"0 ";
                    }
                }
                else
                {
                    if(j%2==1)
                    {
                        cout<<"0 ";
                    }
                    else
                    {
                        cout<<"1 ";
                    }
                }
            }
            cout<<endl;
        }
    }
    else if(i==10)
    {
        short int n;
        cout<<"Enter the number : " ;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=n;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else if(i==11)
    {
        short int n;
        cout<<"Enter the number : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            short int k=1;
            for(int j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
    }
    else if(i==12)
    {
        short int n;
        cout<<"Enter the number : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                cout<<"  ";
            }
            if(i>1)
            {
                for(int j=i;j>1;j--)
                {
                    cout<<j<<" ";
                }
            }
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    else if(i==13)
    {
        short int n;
        cout<<"Enter the number : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=(2*i-1);j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=n-i;j++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=(2*i-1);j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    else if(i==14)
    {
        short int n;
        cout<<"Enter the number ; ";
        cin>>n;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(((i+j)%4==0) || (i==2 && j%4==0))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}