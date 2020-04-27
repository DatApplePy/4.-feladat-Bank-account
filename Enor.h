#ifndef ENOR_H
#define ENOR_H

#include <iostream>
#include <fstream>

struct Client
{
  std::string id;
  int balance;
};

class Enor
{
private:
  Client x;
  std::ifstream _x;
  void read(){_x >> x.id >> x.balance;}
public:
  enum ERROR {FILE_ERROR};

  Enor(const char* _inpath)
  {
    _x.open(_inpath);
    if(_x.fail()) throw FILE_ERROR;
  }
  ~Enor(){_x.close();}

  void first(){read();}
  void next(){read();}
  bool end(){return _x.fail();}
  Client current(){return x;}
};

#endif
