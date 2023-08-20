#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of columns:"<<endl;
    cin>>col;
    int Act[row][col];
    int Pact[row][col];
    cout<<"Enter the first matrix:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>Act[i][j];
        }
    }
    cout<<"Enter the second matrix:"<<endl;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>Pact[i][j];
            }
        }
        int Ans[row][col];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                Ans[i][j]=Act[i][j]+Pact[i][j];
            }
        }
                cout<<"Sum of matrix:"<<endl;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<Ans[i][j]<<' ';
            }
            cout<<"\n";
        }
        return 0;
        
    
            
        }
    
