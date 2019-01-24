#include <iostream>
using namespace std;

//变态跳台阶
class Solution
{
  public:
    Solution()
    {}
    ~Solution()
    {}
    
    int jumpFloor(int number) {
    int result = 1;
    if(number>=0 && number <=1)
      return number;
    else
      {
        for(int i=2;i<=number;++i)
        {
          result *= 2;
        }
      }
    return result;
    }
};
int main()
{
  Solution s;
  cout<<s.jumpFloor(5)<<endl;
  return 0;
}
