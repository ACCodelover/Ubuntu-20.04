#include <iostream>
using namespace std;
const int SIZE = 10;
 
class safearay
{
   private:
      int arr[SIZE];
   public:
      safearay()
      {
         register int i;
         for(i = 0; i < SIZE; i++)
         {
           arr[i] = i;
         }
      }
      int& operator[](int i)
      {
          if( i > SIZE )
          {
              cout << "索引超过最大值" <<endl;
              // 返回第一个元素
              return arr[0];
          }
          return arr[i];
      }
      int& operator[](string t)
      {
          if(t.compare("first")==0)
          {
              return arr[2];
          }
          else if(t.compare("second")==0)
          {
              return arr[5];
          }
          else
          {
            cout << "Illegal parameter" << endl;
            return arr[0];
          }
      }
};
int main()
{
   safearay A;
 
   cout << "A[2] 的值为 : " << A[2] <<endl;
   cout << "A[5] 的值为 : " << A[5]<<endl;
   cout << "A[12] 的值为 : " << A[12]<<endl;
   cout << "A[first] 的值为 : " << A["first"]<<endl;
   cout << "A[second] 的值为 : " << A["second"]<<endl;
   cout << "A[third] 的值为 : " << A["third"]<<endl;
   
 
   return 0;
}