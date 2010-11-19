// Uservisible galois context -*- C++ -*-

#ifndef _GALOIS_CONTEXT_H
#define _GALOIS_CONTEXT_H

#include "Galois/Executable.h"

#include <boost/utility.hpp>

namespace Galois {

template<typename T>
class Context : boost::noncopyable {
public:
  virtual void push(T) = 0;
  virtual void finish() = 0;
  virtual void suspendWith(Executable*) = 0;
};


}

#endif
