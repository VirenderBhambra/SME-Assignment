#include "../../header/Bullet/BulletModel.h"


namespace Bullet {
	
	BulletModel::BulletModel()
	{
		entity_type = Entity::EntityType::BULLET;
	}
	void BulletModel::setBulletPosition(sf::Vector2f position)
	{
		bullet_position = position;
	}
	sf::Vector2f BulletModel::getBulletPosition()
	{
		return bullet_position;
	}
	BulletModel::~BulletModel() { }

	bool BulletModel::isActive() {
		return active;
	}
}
