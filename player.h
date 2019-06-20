#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
#include "core.h"
#include "Item/weapon.h"
#include "Item/shield.h"
#include "qcontainer.h"

namespace Skyrim {

    // PLAYER
    class Player {
    private:
        const QString& name;
        ushort health;
        ushort experience;
        ushort level;
        ushort healPotion;

        Weapon *weapon;
        Shield *shield;
        FrancescoSorge::QContainer<Item*>* inventory;

        static ushort MAX_HEAL_POTION;
        static ushort MAX_HEALTH;
        static ushort MAX_INVENTORY;


    public:
        explicit Player(const QString& name, ushort health = 100, ushort experience = 0, ushort level = 1, ushort healPotion = 2);

        const QString& getName() const;

        ushort getHealth() const;

        ushort getLevel() const;

        ushort getHealPotion() const;

        FrancescoSorge::QContainer<Item*>* getInventory() const;

        ushort getMaxInventory() const;

        bool addToInventory(Item*);

        void addHealPotion(ushort);

        void equipItem(Item*);

        void dropItem(Item*);

        ushort attack() const;

        bool getsAttacked(ushort);

        void gainExperience(ushort);

        void heals();
    };

}

#endif // PLAYER_H
