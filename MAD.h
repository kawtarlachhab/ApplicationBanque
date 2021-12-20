#pragma once
#include "Devise.h"
namespace CompteBancaire
{
    class MAD :public Devise
    {
    private:
    public:
        MAD(double);
       ~MAD();
       void afficher() const;
    };
};


