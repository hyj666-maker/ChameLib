#ifndef CH_KEF_NoMH_AM_2004_H
#define CH_KEF_NoMH_AM_2004_H

#include <utils/Hash.h>
#include <base/GmpElements.h>
#include <utils/RandomGenerator.h>

class CH_KEF_NoMH_AM_2004_pk : public GmpElements{};

class CH_KEF_NoMH_AM_2004_sk : public GmpElements{};

class CH_KEF_NoMH_AM_2004_h: public GmpElements{};

class CH_KEF_NoMH_AM_2004_r: public GmpElements{};

class CH_KEF_NoMH_AM_2004{
    public:
        CH_KEF_NoMH_AM_2004();

        void Setup(CH_KEF_NoMH_AM_2004_pk &pk, CH_KEF_NoMH_AM_2004_sk &sk, CH_KEF_NoMH_AM_2004_h &h, CH_KEF_NoMH_AM_2004_r &r, CH_KEF_NoMH_AM_2004_r &r_p);

        void KeyGen(CH_KEF_NoMH_AM_2004_pk &pk, CH_KEF_NoMH_AM_2004_sk &sk, int k);
       
        void Hash(CH_KEF_NoMH_AM_2004_h &h, CH_KEF_NoMH_AM_2004_r &r, mpz_t m, CH_KEF_NoMH_AM_2004_pk &pk);

        bool Check(CH_KEF_NoMH_AM_2004_h &h, CH_KEF_NoMH_AM_2004_r &r, mpz_t m, CH_KEF_NoMH_AM_2004_pk &pk);

        void Adapt(CH_KEF_NoMH_AM_2004_r &r_p, mpz_t m_p, CH_KEF_NoMH_AM_2004_h &h, CH_KEF_NoMH_AM_2004_r &r, mpz_t m, CH_KEF_NoMH_AM_2004_pk &pk, CH_KEF_NoMH_AM_2004_sk &sk);
        
        bool Verify(CH_KEF_NoMH_AM_2004_h &h, CH_KEF_NoMH_AM_2004_r &r_p, mpz_t m_p, CH_KEF_NoMH_AM_2004_pk &pk);

        ~CH_KEF_NoMH_AM_2004();

        enum {
            g, y, p, q
        };  // pk

        enum {
            x
        };  // sk

        enum{
            h1
        };  // h

        enum{
            r1, s1
        };  // r
};


#endif  // CH_KEF_NoMH_AM_2004_H