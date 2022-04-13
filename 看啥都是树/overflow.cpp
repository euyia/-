#include<vector>
using namespace std;
class Solution {
  
public:
    int rob(vector<int>& nums) {
      int tmp=0,max=0;
int n=nums.size();
for(int i=0;i<=1;i++){
  int j=i;
while(j<=n-1)
{
     tmp+=nums[j];
  if(tmp>=max)
  max=tmp;
  if((j==n-1)||(j==n-2))
  {tmp=0;break;};
  if(nums[j+2]<nums[j+3])
  j+=3;
  else
   j+=2;
  
}
}
return max;
    }
};