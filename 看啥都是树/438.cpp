#include <vector>
#include <string>
using namespace std;
class Solution
{

  vector<int> sso(string a, string b)
  {
    int alen = a.size();
    int blen = b.size();
    vector<int> res;
    vector<int> ac(26);
    vector<int> bc(26);
    if (alen < blen)
      return vector<int>();
    for (int i = 0; i < blen; ++i)
    {
      ++ac[a[i] - 'a'];
      ++bc[b[i] - 'a'];
    }
    if (ac == bc)
      res.push_back(0);
    for (int i = 0; i < alen - blen; ++i)
    {
      --ac[a[i] - 'a'];
      ++ac[a[i + blen] - 'a'];
      if (ac == bc)
        res.push_back(i + 1);
    }
    return res;
  }
};
vector<int> sos(string a, string b)
{
  int alen = a.size();
  int blen = b.size();
  vector<int> res;
  vector<int> ac(26);
  vector<int> bc(26);
  if (alen < blen)
    return vector<int>();
  for (int i = 0; i < blen; ++i)
  {
    ++ac[a[i] - 'a'];
    ++bc[b[i] - 'a'];
  }
  if (ac == bc)
    res.push_back(0);
  for (int i = 0; i < alen - blen; ++i)
  {
    --ac[a[i] - 'a'];
    ++ac[a[i + blen] - 'a'];
    if (ac == bc)
      res.push_back(i + 1);
  }
  return res;
}
vector<int> soso(string a, string b)
{
  int alen = a.size();
  int blen = b.size();
  vector<int> res;
  vector<int> ac(26);
  vector<int> bc(26);
  if (alen < blen)
    return vector<int>();
  for (int i = 0; i < blen; ++i)
  {
    ++ac[a[i] - 'a'];
    ++bc[b[i] - 'a'];
  }
  if (ac == bc)
    res.push_back(0);
  for (int i = 0; i < alen - blen; ++i)
  {
    --ac[a[i] - 'a'];
    ++ac[a[i + blen] - 'a'];
    if (ac == bc)
      res.push_back(i + 1);
  }
  return res;
}
vector<int> soso(string a, string b)
{
  int alen = a.size();
  int blen = b.size();
  vector<int> res;
  vector<int> ac(26);
  vector<int> bc(26);
  if (alen < blen)
    return vector<int>();
  for (int i = 0; i < blen; ++i)
  {
    ++ac[a[i] - 'a'];
    ++bc[b[i] - 'a'];
  }
  if (ac == bc)
    res.push_back(0);
  for (int i = 0; i < alen - blen; ++i)
  {
    --ac[a[i] - 'a'];
    ++ac[a[i + blen] - 'a'];
    if (ac == bc)
      res.push_back(i + 1);
  }
  return res;
}
vector<int> soso(string a, string b)
{
  int alen = a.size();
  int blen = b.size();
  vector<int> res;
  vector<int> ac(26);
  vector<int> bc(26);
  if(alen<blen)
  return vector<int>();
  for(int i=0;i<blen;++i)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];
  }
  if(ac==bc)
  res.push_back(0);
  for(int i=0;i<alen-blen;++i)
  {
    --ac[a[i]-'a'];
    ++a[a[i+blen]-'a'];
    if(ac==bc)
    res.push_back(i+1);
  }
  return res;
 
}
vector<int>soso(string a,string b)
{
  vector<int>res;
  vector<int>ac;
  vector<int >bc;
  int alen=a.size();
  int blen=b.size();
  if(alen<blen)
  return vector<int>();
  for(int i=0;i<blen;++i)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];
  }
  if(ac==bc)
  res.push_back(0);
  for(int i=0;i<alen-blen;++i)
{
  --ac[a[i]-'a'];
  ++ac[a[i+blen]-'a'];
  if(ac==bc)
  res.push_back(i+1);
}
return res;
}
vector<int>soso(string a,string b)
{
  vector<int>res;
  vector<int >ac;
  vector<int>bc;
  int alen=a.size();
  int blen=b.size();
  if(alen<blen)return vector<int>();
  for(int i=0;i<blen;i++)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];
  }
  if(ac==bc)
  res.push_back(0);
  for(int i=0;i<alen-blen;++i)
  {
    --ac[a[i]-'a'];
    ++ac[a[i+blen]-'a'];
    if(ac==bc)
    res.push_back(i+1);
  }
  return res;
}
vector<int>soso(string a,string b)
{
  vector<int>res;
  vector<int>ac;
  vector<int>bc;
  int n=a.size();
  int m=b.size();
  if(n<m)return vector<int>();
  for(int i=0;i<m;i++)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];
  }
  if(ac==bc)res.push_back(0);
  for(int i=0;i<n-m;++i)
  {
    --ac[a[i]-'a'];
    ++ac[a[i+m]-'a'];
    if(ac==bc)
    res.push_back(i+1);
  }
  return res;
}
vector<int>soso(string a,string b)
{
  vector<int>res;
  vector<int>ac;
  vector<int>bc;
  int alen=a.size();
  int blen=b.size();
  if(alen<blen)return vector<int>();
  for(int i=0;i<blen;++i)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];

  }
  if(ac==bc)
  res.push_back(0);
  for(int i=0;i<alen-blen;++i)
  {
    --ac[a[i]-'a'];
    ++ac[a[i]-'a'];
    if(ac==bc)
    res.push_back(i+1);
  }
  return res;
}
int water(int *plants,int n,int capacity)
{
  int k=capacity;
  int need=0;
  int i;
  for(int i=0;i<n;i++)
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
int water(int*plants,int n,int capacity)
{
  int k=capacity;
  int need=0;
  int i;
  for(i=0;i<n;++i)
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
vector<int>soso(string a,string b)
{
  vector<int>res;
  vector<int>ac;
  vector<int>bc;
  int alen=a.size();
  int blen=b.size();
  if(alen<blen)return vector<int>();
  for(int i=0;i<blen;++i)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];

  }
  if(ac==bc)
  res.push_back(0);
  for(int i=0;i<alen-blen;++i)
  {
    --ac[a[i]-'a'];
    ++ac[a[i+blen]-'a'];
  if(ac==bc)
  res.push_back(i+1);
  }
  return res;
}
vector<int>soso(string a,string b)
{
  int alen=a.size();
  int blen=b.size();
  vector<int>ac;
  vector<int>res;
  vector<int>bc;
  if(alen<blen)return vector<int>();
  for(int i=0;i<blen;i++)
  {
    ++ac[a[i]-'a'];
    ++bc[b[i]-'a'];
  }
  if(ac==bc)
  res.push_back(0);
  for(int i=0;i<alen-blen;i++)
  {
    --ac[a[i]-'a'];
    ++ac[a[i+blen]-'a'];
    if(ac==bc)
    res.push_back(i+1);
  }
  return res;
}