#include "BulletController.h"

namespace Bullet {
    BulletController::BulletController()  { bullet_view(nullptr), bullet_model(nullptr) }

    BulletController::~BulletController() {
        delete bullet_view;
        delete bullet_model;
    }

    void BulletController::initialize(BulletModel* model, BulletView* view) {
        bullet_model = model;
        bullet_view = view;
    }

    void BulletController::update(float deltaTime) {
        // Update bullet model
        bullet_model->update(deltaTime);

        // Update bullet view
        bullet_view->update();
    }

    void BulletController::render(sf::RenderWindow& window) {
        // Render bullet view
        bullet_view->render(window);
    }

    void BulletController::setPosition(const sf::Vector2f& position) {
        bullet_model->setPosition(position);
    }

    void BulletController::setVelocity(const sf::Vector2f& velocity) {
        bullet_model->setVelocity(velocity);
    }

    void BulletController::setDamage(float damage) {
        bullet_model->setDamage(damage);
    }

    void BulletController::activate() {
        bullet_model->activate();
    }

    void BulletController::deactivate() {
        bullet_model->deactivate();
    }

    bool BulletController::isActive() const {
        return bullet_model->isActive();
    }

    const sf::Vector2f& BulletController::getPosition() const {
        return bullet_model->getPosition();
    }
}
