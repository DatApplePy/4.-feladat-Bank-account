#include <iostream>
#include "enor.h"

int main()
{
  Enor t("inp.txt");
  bool l = false;
  std::string min_id;
  Client min_client;

  for(t.first(); !t.end(); t.next())
  {
    if(!(t.current().balance >= 0));
    else if(t.current().balance >= 0 && l)
    {
      if(t.current().balance < min_client.balance)
      {
          min_client = t.current();
      }
    }
    else if(t.current().balance >= 0 && !l)
    {
      l = true;
      min_client = t.current();
    }
  }

  std::cout << min_client.id << std::endl;

  return 0;
}
