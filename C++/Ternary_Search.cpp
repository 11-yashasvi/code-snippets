#include <bits/stdc++.h> #include<vector>
using namespace std;

int ternary_search(int l , int r , int target , int arr[])
{
int mid1=l+(r-l)/3; int mid2=r-(r-l)/3;

if(r>=1)
{
if(arr[mid1]==target)
{
return mid1;
}
if(arr[mid2]==target)
{
return mid2;
}

if(target<arr[mid1])
{
return ternary_search(l , mid1-1 , target , arr);
}
else if(target>arr[mid2])
{
return ternary_search(mid2+1 , r ,target ,arr);
}
 
else
{
return ternary_search(mid1+1 ,mid2-1 , target ,arr);
}


}


return -1;
}

int main()
{
int n=0,target=0,i;
int arr[]={1,2,3,4,5,6};
cout<<"enter element to be searched :"<<endl; cin>>target;
int l=0; int r=5;
int p = ternary_search(l , r ,target ,arr);

cout<<"the index of element target is :"<<p<<endl;

return 0;
}
