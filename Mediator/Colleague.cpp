#include "Colleague.h"
#include "Mediator.h"

Mediator* Colleague::getMediator()
{
	return mediator;
}

void Colleague::setMediator(Mediator* const mediator)
{
	this->mediator = mediator;
}

Colleague::Colleague(Mediator* mediator)
{
	this->mediator = mediator;
	this->mediator->add(this);
}