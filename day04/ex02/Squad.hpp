#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
public:
    Squad(void);
    ~Squad(void);
    Squad(Squad const & src);
    Squad &operator=(Squad const & rhs);

    int             getCount(void) const;
    ISpaceMarine    *getUnit(int n) const;
    int             push(ISpaceMarine *unit);

private:
    struct _sUnit
    {
        int index;
        ISpaceMarine *marine;
        struct _sUnit *next;
    };
    struct _sUnit *list;

};

#endif
