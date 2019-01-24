#include <iostream>
using namespace std;

//跳台阶
class Solution
{
  public:
    Solution()
    {}
    ~Solution()
    {}
    
    int jumpFloor(int number) {
    int first = 1;
    int second =2;
    int result = 0;
    if(number>=0 && number <=1)
      return number;
    else if(number == 2)
      return 2;
    else
      {
        for(int i=3 ;i<=number ; ++i)
        {
          result = first + second;
          first = second;
          second = result;
        }
      }
        return result;
    }
};
int main()
{
  Solution s;
  cout<<s.jumpFloor(10)<<endl;
  return 0;
}
