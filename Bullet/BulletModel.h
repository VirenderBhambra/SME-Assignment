#pragma once
#include <SFML/Graphics.hpp>
#include "../../header/Entity/EntityConfig.h"
#include "../../header/UI/GameplayUI/GameplayUIController.h"
#include "../../header/Player/PlayerModel.h"

namespace Bullet {
  
    class BulletModel {
        class PlayerModel;
    private:
        sf::Sprite sprite;
        Entity::EntityType entity_type;
        PlayerModel* player_model;
        //BulletType bullet_type;
        bool active;
        sf::Vector2f bullet_position;

    public:
        const float velocity = 2.f;
       
        BulletModel();
        ~BulletModel();

        bool isActive();
        void deactivate();

        void setBulletPosition(sf::Vector2f position);
        sf::Vector2f getBulletPosition();
        const sf::Sprite& getSprite();
    };
}