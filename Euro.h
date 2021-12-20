#pragma once
#include "Devise.h"
namespace CompteBancaire
{
    class Euros :
        public Devise
    {
    private:

    public:
         Euros(double val);
        ~Euros();
        void afficher() const ;
    };
};

