#include<iostream>
using namespace std;
bool check(int x,int y,int z)   //to check whether true or false we use boolean
{
    int a= max(x,max(y,z));     //meaning here is that a is maximum
    int b,c;
    if(a == x){                 //x is grater than y and z
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;                  // y is greater than x and z
        c = z;
    }
    else{                       // z is greater than y and x
        b = y;
        c = x;
    }
    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(check (x,y,z))
        {
            cout<<"pythagorean triplet";
        }
    else
        {
            cout<<"Not a pythagorean triplet";
        }
    return 0;
}
