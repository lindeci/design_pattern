#ifndef _CONCRETECOLLEAGUE1_H_
#define _CONCRETECOLLEAGUE1_H_
#include <iostream>
#include <string>
#include "Colleague.h"
#include "Mediator.h"
class ConcreteColleague1:public Colleague
{
public:
	ConcreteColleague1(Mediator* mediator):Colleague(mediator)
	{
	}

	void send(std::string message)
	{
		getMediator()->send(message, this);
	}

	void Notify(std::string message)
	{
		std::cout << "同事1收到消息：" + message<<std::endl;
	}
};
#endif