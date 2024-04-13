#pragma once
#include <SFML/Graphics.hpp>
#include "../../header/UI/UIElement/ImageView.h"
#include "../../header/Bullet/BulletController.h"

namespace Bullet {
	class BulletController;
	class BulletView {
	private:
		const sf::String bullet_texture_path = "assets/textures/laser_bullet.png";
		const float bullet_sprite_width = 8.f;
		const float bullet_sprite_height = 15.f;

		BulletController* bullet_controller;
		UI::UIElement::ImageView* bullet_image;
		void createUIElements();
		void initializeImage();

		void destroy();
	public:
		BulletView();
		~BulletView();

		void initialize(BulletController* controller);
		void update();
		void render();
		const sf::Sprite& getBulletSprite();
	};
}