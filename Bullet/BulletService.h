#pragma once
namespace Bullet {
	class BulletController;

	class BulletService
	{
	private:
		BulletController* bullet_controller;

	public:
		BulletService();
		~BulletService();

		void initialize();
		void update();
		void render();

		void reset();
	};
}