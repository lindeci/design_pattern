#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_
#include <string>
#include "Colleague.h"
class Mediator	
{
public:
	virtual void send(std::string message, Colleague* colleague)=0;
	virtual void add(Colleague* colleague)=0;
};
#endif