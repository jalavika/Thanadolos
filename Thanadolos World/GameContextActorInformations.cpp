#include "Globals.h"
#include "GameContextActorInformations.hpp"

GameContextActorInformations::GameContextActorInformations(int contextualId, EntityLook& look, EntityDispositionInformations& disposition)
{
	this->contextualId = contextualId;
	this->look = look;
	this->disposition = disposition;

}

GameContextActorInformations::GameContextActorInformations()
{

}

ushort GameContextActorInformations::getId()
{
	return __id;
}

std::string GameContextActorInformations::getName()
{
	return "GameContextActorInformations";
}

void GameContextActorInformations::serialize(BinaryWriter& writer)
{
	writer.writeDouble(this->contextualId.toNumber());
	writer.writeShort(this->disposition.getId());
}

void GameContextActorInformations::deserialize(BinaryReader& reader)
{
	{
}