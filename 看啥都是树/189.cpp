#include<algorithm>
#include<vector>
using namespace std;
class Solution{
public:
void change(vector<int>&nums,int start,int end)

{if(start<end){

  swap(nums[start],nums[end]);
  start+=1;
  end-=1;
}
}
void ottat(vector<int>&nums,int k)
{
  k%=nums.size();
  change(nums,0,nums.size()-1);
  change(nums,0,k-1);
  change(nums,k,nums.size()-1);
  
}
};
void change(vector<int>&a,int left,int right)
{
  if(left<right)
  {
    swap(a[left],a[right]);
    left+=1;
    right-=1;
  }
}
void rotato(vector<int>&a,int k)
{
  k%=a.size();
  change(a,0,a.size()-1);
  change(a,k,a.size()-1);
  change(a,0,k-1);
}


class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start += 1;
            end -= 1;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
};

void reverse(vector<int>&a,int left,int right)
{
  while(left<right)
  {
    swap(a[left],a[right]);
    left+=1;
    right-=1;
  }
}
void rotat(vector<int>&a,int k)
{
  k%=a.size();
  reverse(a,0,a.size()-1);
  reverse(a,k,a.size()-1);
  reverse(a,0,k-1);
}
void reverse(vector<int>&a,int l,int r)
{
  while(l<r)
  {
    swap(a[l++],a[r--]);
  }
}
void rotate(vector<int>&a)
{
  int l=0;
  int n=a.size();
  for(int r=0;r<n;r++)
{
  if(a[r]==' ')
  {
    reverse(a,l,r-1);
    l=r+1;
  }
}
reverse(a,l,n-1);
reverse(a,0,n-1);
}
void reverse(vector<char>&a,int l,int r)
{
  while(l<r)
  {
    swap(a[l++],a[r--]);
    
  }
}
void rotate(vector<char>&a)
{
  int n=a.size();
  int l=0;
  for(int r=0;r<n;r++)
  {
    if(a[r]==' ')
    {
      reverse(a,l,r-1);
      l=r+1;
    }
  }reverse(a,l,n-1);
  reverse(a,0,n-1);
}
void rotate(vector<char>&a)
{
  int n=a.size();
  int l=0;
  for(int r=0;r<n;r++)
  {
    if(a[r]==' ') 
    {
      reverse(a,l,r-1);
      l=r+1;
    }
  }reverse(a,l,n-1);
  reverse(a,0,n-1);
}
int water(int*plants,int n,int capacity)
{
  int k=capacity;
  int need;
  int i;
  for(i=-1;i<n;i++)
  {
    if(capacity>=plants[i+1])
    {
      capacity-=plants[i+1];
      need++;
    }
    else
    {
      capacity=k-plants[i+1];
      need=need+2*(i+1)+1;
    }
  }
  return need;
}
int maxn(vector<int>&colors)
{
  int n=colors.size();
  int res=0;
  for(int i=0;i<n;i++)
  for(int j=n-1;j>i;j--)
  if(colors[i]!=colors[j])
  {
    res=max(j-i,res);
    break;
  }
  return res;
}
int maxn(vector<int>&colors)
{
  int n=colors.size();
  int res=0;
  for(int i=0;i<n;i++)
  for(int j=n-1;j>i;j--)
  if(colors[i]!=colors[j])
  {
    res=max(j-i,res);
    break;
  }
  return res;
}
int buy(vector<int>&t,int k)
{
  int n=t.size();
  int res=0;
  for(int i=0;i<n;i++)
  {
    if(i<=k)
    res+=min(t[i],t[k]);
    else
    res+=min(t[i],t[k]-1);
  }return res;
}
int single(vector<int>&nums)
{
  int ret=0;
  for(auto e:nums)ret^=e;
  return ret;
}
int single(vector<int>&nums)
{
  int res=0;
  for(auto e:nums)res^=e;
  return res;
  
}
int single(vector<int>&nums)
{
  int res=0;
  for(auto e:nums)res^=e;
  return res;
}
int singele(vector<int>&nums)
{
  int res=0;
  for(auto e:nums)res^=e;
  return res;
}