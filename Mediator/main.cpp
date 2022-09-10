#include <iostream>
#include "ConcreteMediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"
#include "ConcreteColleague3.h"
#include "Mediator.h"
#include "Colleague.h"

using namespace std;
int main(int argc, char* argv[])
{
	Mediator* mediator = new ConcreteMediator();
	ConcreteColleague1* colleague1 = new ConcreteColleague1(mediator);
	ConcreteColleague2* colleague2 = new ConcreteColleague2(mediator);
	ConcreteColleague3* colleague3 = new ConcreteColleague3(mediator);

	colleague1->send("早上好啊！");
	colleague2->send("早安！");
	return 0;
}

