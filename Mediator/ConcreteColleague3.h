#ifndef _CONCRETECOLLEAGUE3_H_
#define _CONCRETECOLLEAGUE3_H_
#include <iostream>
#include <string>
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleague3:public Colleague
{
public:
	ConcreteColleague3(Mediator* mediator):Colleague(mediator)
	{
	}

	void send(std::string message)
	{
		getMediator()->send(message, this);
	}

	void Notify(std::string message)
	{
		std::cout << "同事3收到消息：" + message << std::endl;
	}
};
#endif