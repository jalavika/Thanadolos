#include "Globals.h"
#include "InventoryContentMessage.hpp"

InventoryContentMessage::InventoryContentMessage(std::vector<ObjectItem> objects, int kamas)
{
	this->objects = objects;
	this->kamas = kamas;

}

InventoryContentMessage::InventoryContentMessage()
{

}

ushort InventoryContentMessage::getId()
{
	return id;
}

std::string InventoryContentMessage::getName()
{
	return "InventoryContentMessage";
}

void InventoryContentMessage::serialize(BinaryWriter& writer)
{
	writer.writeShort(this->objects.size());
	while (_loc2_ < this->objects.size())
		_loc2_++;
}

void InventoryContentMessage::deserialize(BinaryReader& reader)
{
	{
		int _loc2_ = reader.readUnsignedShort();
		while (_loc3_ < _loc2_)
}