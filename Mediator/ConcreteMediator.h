#ifndef _CONCRETEMEDIATOR_H_
#define _CONCRETEMEDIATOR_H_
#include <vector>
#include "Colleague.h"
#include "Mediator.h"
class ConcreteMediator:public Mediator
{
public:
	void add(Colleague* colleague)
	{
		colleaguesList.push_back(colleague);
	}

	void send(std::string message, Colleague* colleague)
	{
		for (auto value : colleaguesList)
		{
			if(value!=colleague)
			{
				value->Notify(message);
			}
		}
	}
private:
	std::vector<Colleague*> colleaguesList;
};
#endif