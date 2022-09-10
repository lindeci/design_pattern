#ifndef _CONCRETECOLLEAGUE2_H_
#define _CONCRETECOLLEAGUE2_H_
#include <iostream>
#include <string>
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleague2:public Colleague
{
public:
	ConcreteColleague2(Mediator* mediator):Colleague(mediator)
	{
	}

	void send(std::string message)
	{
		getMediator()->send(message, this);
	}

	void Notify(std::string message)
	{
		std::cout << "同事2收到消息：" + message << std::endl;
	}
};
#endif