#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows you wants to enter : ";
    cin>>m;
    cout<<"Enter the number of columns you wants to enter : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the elements in the 2D array : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The 2D array you entered is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int choice;
    cout<<"Enter your choice ; ";
    cin>>choice ;
    if(choice==1)
    {
        int key;
        cout<<"Enter the key you wants to search : ";
        cin>>key;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==key)
                {
                    cout<<"The item is found at position : "<<i<<" "<<j<<endl;
                }
            }
            cout<<endl;
        }
    }
    else if(choice==2)
    {
        // spiral order traversal.
        int start_row=0;
        int end_row=m-1;
        int start_col=0;
        int end_col=n-1;
        while(start_row<=end_row || start_col<=end_col)
        {
            for(int col=start_col;col<=end_col;col++)
            {
                cout<<arr[start_row][col]<<" ";
            }
            start_row+=1;
            for(int row=start_row;row<=end_row;row++)
            {
                cout<<arr[row][end_col]<<" ";
            }
            end_col-=1;
            for(int col=end_col;col>=start_col;col--){
                cout<<arr[end_row][col]<<" ";
            }
            end_row-=1;
            for(int row=end_row;row>=start_row;row--){
                cout<<arr[row][start_col]<<" ";
            }
            start_col+=1;
        }
    }

    else if(choice==3)
    {
        // Transposition of a matrix;
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                arr[i][j]=arr[i][j]+arr[j][i];
                arr[j][i]=arr[i][j]-arr[j][i];
                arr[i][j]=arr[i][j]-arr[j][i];
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    else if(choice==4)

    {
        // Multiplication of two matrices .
        int arr2[m][n];
        cout<<"Enter the elements in the second array : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr2[i][j];
            }
        }
        int ans[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=0;
            }
        }


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                    ans[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    else if(choice==5)
    {
        int r=0,c=n-1,flag=0;
        int target;
        cout<<"enter the target you wants to search : ";
        cin>>target;
        while(r<=m && c>=0)
        {
            if(arr[r][c]==target)
            {
                cout<<"the element is found in the array .";
                flag=1;
                break;
            }
            else if(arr[r][c]<target)
            {
                r++;
            }
            else
            {
                c--;
            }
        }
        if(flag==0)
        {
            cout<<"The element is not present inside the array.";
        }
    }
    cout<<endl;
    return 0;
}