#include "Globals.h"
#include "SpellItem.hpp"

SpellItem::SpellItem(int spellId, int spellLevel) : Item()
{
	this->spellId = spellId;
	this->spellLevel = spellLevel;
}

SpellItem::SpellItem()
{

}

ushort SpellItem::getId()
{
	return __id;
}

std::string SpellItem::getName()
{
	return "SpellItem";
}

void SpellItem::serialize(BinaryWriter& writer)
{
	Item::serialize(writer);
	writer.writeInt(this->spellId);
}

void SpellItem::deserialize(BinaryReader& reader)
{
	{
}