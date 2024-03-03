#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact=1;
    cin>>num;
    int x;
    for(int x=1;x<=num;x++)
    fact=fact*x;
    cout<<fact;
    return 0;
}