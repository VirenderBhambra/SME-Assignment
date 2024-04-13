#pragma once
#include <SFML/Graphics.hpp>
#include "../Collision/ICollider.h"
#include "BulletModel.h"
#include "BulletView.h"

namespace Bullet {
	class BulletView;
	class BulletModel;
	class BulletController : public Collision::ICollider
	{
	private:
		BulletView* bullet_view;
		BulletModel* bullet_model;

		//void move();
	public:
		BulletController();
		~BulletController();
        void initialize(BulletModel* model, BulletView* view);

        void update(float deltaTime);

        void render(sf::RenderWindow& window);

        void setPosition(const sf::Vector2f& position);

        void setVelocity(const sf::Vector2f& velocity);

        void activate();

        void deactivate();

        bool isActive() const;

        const sf::Vector2f& getBulletPosition() const;
	};
}