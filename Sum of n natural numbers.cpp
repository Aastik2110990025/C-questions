#include<iostream>
using namespace std;
int sum(int n)
{
    int ans = (n*(n+1)/2); //short and consumes less time
    /*int ans;
    for(int i=1;i<=n;i++)
    {
        ans += i;    //also can be done using this
    }
    */
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
