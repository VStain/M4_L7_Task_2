#include "Class_Counter.h"

void Counter::Increment()
   {
      this->user_input += 1;
   }
   void Counter::Decrement()
   {
      this->user_input -= 1;
   }
   int Counter::Get_value()
   {
      return this->user_input; 
   }
