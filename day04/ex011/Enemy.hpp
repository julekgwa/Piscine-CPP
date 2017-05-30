//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_ENEMY_HPP
#define PISCINE_CPP_ENEMY_HPP


class Enemy {
private:
    int _hp;
    std::string _type;
protected:
    Enemy(void);
public:
    Enemy(int hp, std::string const &type);

    virtual ~Enemy();

    std::string virtual getType() const;

    int getHP() const;

    virtual void takeDamage(int);
};


#endif //PISCINE_CPP_ENEMY_HPP
