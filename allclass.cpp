#include<iostream>

using namespace std;

class Person{
  public:
    char name[10];

};

class Thing{
  public:
    char name[10];
  
};

class Place{
  public:
    char name[30];
    int glat;
    int glon;
};

Person::dump2JSON
()
{
  Json::Value result;
  result["time"] = ("test");
  delete str_ptr;

#ifdef _ECS36B_DEBUG_
  std::cout << result.toStyledString() << std::endl;
#endif /* _ECS36B_DEBUG_ */

  return result;
};

