#include "../../header/Bullet/BulletView.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Global/Config.h"
#include "../../header/Graphics/GraphicService.h"
#include "../../header/Bullet/BulletController.h"
#include "../../header/Bullet/BulletModel.h"

namespace Bullet {
	using namespace Global;
	using namespace UI::UIElement;

	BulletView::BulletView() { createUIElements(); }

	BulletView::~BulletView() { destroy(); }

	void BulletView::initialize(BulletController* controller)
	{
		bullet_controller = controller;
		initializeImage();
	}

	void BulletView::createUIElements()
	{
		bullet_image = new ImageView();
	}

	void BulletView::initializeImage()
	{
		bullet_image->initialize(Config::bullet_texture_path, bullet_sprite_width, bullet_sprite_height, bullet_controller->getBulletPosition());
	}

	void BulletView::update()
	{
		bullet_image->setPosition(bullet_controller->getBulletPosition());
		bullet_image->update();
	}

	void BulletView::render()
	{
		bullet_image->render();
	}

	void BulletView::destroy()
	{
		delete(bullet_image);
	}


	const sf::Sprite& BulletView::getBulletSprite()
	{
		return bullet_image->getSprite();
	}
}