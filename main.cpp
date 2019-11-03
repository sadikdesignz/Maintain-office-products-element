#include<iostream>
#include<cstdlib>
using namespace std;
int op;
int c=0;
int operation()
{
    cout<<"Please choose one of the following operations"<<endl;
    cout<<"1 to add a product"<<endl;
    cout<<"2 to view the products"<<endl;
    cout<<"3 to sell a product"<<endl;
    cout<<"4 to check empty space"<<endl;
    cout<<"5 to exit"<<endl;
    cin>>op;
    return op;

