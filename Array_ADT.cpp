#include<bits/stdc++.h>

using namespace std;

struct Array{
    int* arr;
    int sizee;
    int length;
};
void append(struct Array* a,int* b,int s)
{
    int p=a->length;
    for(int i=a->length,j=0;i<(a->length+s),j<s;i++,j++)
    {
        a->arr[i]=b[j];
        p++;
    }
    a->sizee=a->sizee+s;
    a->length=p;
}
void insert_number(struct Array* a,int* b,int index)
{
    for(int i=a->length-1;i>=index;i--)
    {
        a->arr[i+1]=a->arr[i];
    }
    a->arr[index]=*b;
    a->length++;
    a->sizee++;
}

void delete_number(struct Array* a,int index)
{
    for(int i=index;i<a->sizee-1;i++)
    {
        a->arr[i]=a->arr[i+1];
    }
    a->sizee--;
    a->length--;
}

int linear_search(struct Array* a,int num)
{
    for(int i=0;i<a->sizee;i++)
    {
        if(a->arr[i]==num){
            return i;
        }
    }
}

int improved_linear_search(struct Array* a,int num)
{
    int key;
    for(int i=0;i<a->sizee;i++)
    {
        if(a->arr[i]==num)
        {
            key=i;
            break;
        }
    }
    int temp=a->arr[key];
    a->arr[key]=a->arr[key-1];
    a->arr[key-1]=temp;
    return key;
}
int more_improved_linear_search(struct Array* a,int num)
{
    int key;
    for(int i=0;i<a->sizee;i++)
    {
        if(a->arr[i]==num)
        {
            key=i;
            break;
        }
    }
    int temp=a->arr[key];
    a->arr[key]=a->arr[0];
    a->arr[0]=temp;
    return key;
}
int main()
{
    struct Array a;

    a.length=0;
    a.sizee=5;

    a.arr=new int[a.sizee];

    for(int i=0;i<5;i++)
    {
        cin>>*(a.arr+i);
        a.length++;
    }
    for(int i=0;i<5;i++)
    {
        cout<<*(a.arr+i)<<" ";
    }
    cout<<endl;
    cout<<a.sizee<<endl;

    cout<<a.length<<endl;

    int b[5]={6,7,8,9,10};

    append(&a,&b[0],5);

    for(int i=0;i<a.length;i++)
    {
        cout<<*(a.arr+i)<<" ";
    }
    cout<<endl;

    cout<<a.sizee<<endl;
    cout<<a.length<<endl;


    int num=25;
    insert_number(&a,&num,5);

    for(int i=0;i<a.length;i++)
    {
        cout<<*(a.arr+i)<<" ";
    }
    cout<<endl;

    cout<<a.sizee<<endl;
    cout<<a.length<<endl;


    delete_number(&a,5);

    for(int i=0;i<a.length;i++)
    {
        cout<<*(a.arr+i)<<" ";
    }
    cout<<endl;

    cout<<a.sizee<<endl;
    cout<<a.length<<endl;


    cout<<"Index of 5 in the array: "<<linear_search(&a,5)<<endl;
    cout<<"Index of 5 in the array: "<<improved_linear_search(&a,5)<<endl;
    cout<<"Index of 5 in the array: "<<improved_linear_search(&a,5)<<endl;
    cout<<"Index of 5 in the array: "<<more_improved_linear_search(&a,5)<<endl;
    cout<<"Index of 5 in the array: "<<more_improved_linear_search(&a,5)<<endl;

    delete[] a.arr;

    return 0;
}
