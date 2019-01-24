#include <iostream>

using namespace std;

class Solution {
  public:
    double Power(double base, int exponent) 
    {
      int n=exponent;
      if (n == 0)
        return 1;
      else if(n < 0)
      {
        if(base==0)
        {
          cerr<<"分母不能为0"<<endl;
          return -1;
        }
        n = -n;                                                        
      } 
      volatile double ret = 1;
      while(n)
      {
        ret *= base;
        base *= base;
        n = (n-1) & n;
      }
      return exponent>=0?ret:(1/ret);                                                      
    }
};
int main()
{
  Solution s;
  cout<<s.Power(1.1,3)<<endl;
  return 0;
}
