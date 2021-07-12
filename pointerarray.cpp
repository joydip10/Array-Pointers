#include<iostream>

using namespace std;

int main()
{
 /*   string *p;
    string arr[5]={"kola","khaba","khao","na","ekta"};
    p=arr;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }


 string *p=new string[10];
 cin>>*(p+0);
 delete []p;

 int num=5;
 int* p;
 p=&num;
 int **q;
 q=&p;

 cout<<num<<endl;
 cout<<*p<<endl;
 cout<<**q<<endl;
 cout<<endl<<endl;
 cout<<&num<<endl;
 cout<<p<<endl;
 cout<<*q<<endl;
 cout<<endl<<endl;
 cout<<&p<<endl;
 cout<<q<<endl;


 int *arr[3];

 arr[0]=new int[3];
 arr[1]=new int[3];
 arr[2]=new int[3];

 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    {
        cin>>*(arr[i]+j);
    }
 }

 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    {
        cout<<*(arr[i]+j)<<" ";
    }
    cout<<endl;
 }
 */

 int** c=new int*[3];
 c[0]=new int[4];
 c[1]=new int[4];
 c[2]=new int[4];

 for(int i =0;i<3;i++)
 {
     for(int j=0;j<4;j++)
     {
         cin>>c[i][j];
     }
 }
 for(int i =0;i<3;i++)
 {
     for(int j=0;j<4;j++)
     {
         cout<<c[i][j]<<" ";
     }
     cout<<endl;
 }

 delete c;
 delete [] c[0];
 delete [] c[1];
 delete [] c[2];
return 0;
}
