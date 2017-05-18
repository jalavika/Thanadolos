#include "Globals.h"
#include "HumanInformations.hpp"

HumanInformations::HumanInformations(ActorRestrictionsInformations& restrictions, bool sex, std::vector<HumanOption> options)
{
	this->restrictions = restrictions;
	this->sex = sex;
	this->options = options;

}

HumanInformations::HumanInformations()
{

}

ushort HumanInformations::getId()
{
	return __id;
}

std::string HumanInformations::getName()
{
	return "HumanInformations";
}

void HumanInformations::serialize(BinaryWriter& writer)
{
	this->restrictions.serialize(writer);
	writer.writeBool(this->sex);
	while (_loc2_ < this->options.size())
}

void HumanInformations::deserialize(BinaryReader& reader)
{
	{
		HumanOption _loc5_;
		this->restrictions.deserialize(reader);
		while (_loc3_ < _loc2_)
}