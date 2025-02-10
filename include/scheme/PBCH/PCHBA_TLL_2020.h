#ifndef PCHBA_TLL_2020_H
#define PCHBA_TLL_2020_H

#include <utils/Hash.h>
#include <base/PbcScheme.h>
#include <base/PbcElements.h>

#include <ABE/ABET.h>

class PCHBA_TLL_2020_sk{
    private:
        ABET_msk skABET;
        PbcElements skCHET;
    public:
        ABET_msk& get_skABET(){
            return skABET;
        }
        PbcElements& get_skCHET(){
            return skCHET;
        }
};

class PCHBA_TLL_2020_pk{
    private:
        ABET_mpk pkABET;
        PbcElements pkCHET;
    public:
        ABET_mpk& get_pkABET(){
            return pkABET;
        }
        PbcElements& get_pkCHET(){
            return pkCHET;
        }
};

class PCHBA_TLL_2020_sks{
    private:
        PbcElements skCHET;
        ABET_sks sksABET;
    public:
        PbcElements& get_skCHET(){
            return skCHET;
        }
        ABET_sks& get_sksABET(){
            return sksABET;
        }
};

class PCHBA_TLL_2020_ID{
    private:
        ABET_ID IDABET;
    public:
        ABET_ID& get_IDABET(){
            return IDABET;
        }
};


class PCHBA_TLL_2020_r: public PbcElements{
    private:
        // element_t p, h_, c, epk, sigma
        // C
        ABET_ciphertext C;
    public:
        ABET_ciphertext& get_C(){
            return C;
        }
};


class PCHBA_TLL_2020_h{
    private:
        PbcElements h;
        PCHBA_TLL_2020_r r;
    public:
        PbcElements& get_h(){
            return h;
        }
        PCHBA_TLL_2020_r& get_r(){
            return r;
        }
};

class PCHBA_TLL_2020: public PbcScheme{
    private:
        ABET abet;

        int k;
        element_t r,R;
        element_t s1,s2;
        element_t esk;
    public:
        PCHBA_TLL_2020(element_s *_G1, element_s *_G2, element_s *_GT, element_s *_Zn);

        void SetUp(PCHBA_TLL_2020_pk &pkPCHBA, PCHBA_TLL_2020_sk &skPCHBA, PCHBA_TLL_2020_sks &sksPCHBA, PCHBA_TLL_2020_h &h, PCHBA_TLL_2020_h &h_p, int k);

        void KeyGen(PCHBA_TLL_2020_sks &sksPCHBA, PCHBA_TLL_2020_pk &pkPCHBA, PCHBA_TLL_2020_sk &skPCHBA, std::vector<std::string> &attr_list, PCHBA_TLL_2020_ID &ID, int mi);

        void Hash(PCHBA_TLL_2020_h &h, element_t m, PCHBA_TLL_2020_pk &pkPCHBA, PCHBA_TLL_2020_sk &skPCHBA, std::string policy_str, PCHBA_TLL_2020_ID &ID, int oj);

        bool Check(PCHBA_TLL_2020_h &h, element_t m, PCHBA_TLL_2020_pk &pkPCHBA);

        void Adapt(PCHBA_TLL_2020_h &h_p, element_t m_p, PCHBA_TLL_2020_h &h, element_t m, std::string policy_str, PCHBA_TLL_2020_ID &ID, int mi, PCHBA_TLL_2020_pk &pkPCHBA, PCHBA_TLL_2020_sk &skPCHBA, PCHBA_TLL_2020_sks &sksPCHBA);

        bool Verify(PCHBA_TLL_2020_h &h_p, element_t m_p, PCHBA_TLL_2020_pk &pkPCHBA);

        bool Judge(element_t m, PCHBA_TLL_2020_h &h, element_t m_p, PCHBA_TLL_2020_h &h_p, PCHBA_TLL_2020_ID &ID, int mi, PCHBA_TLL_2020_pk &pkPCHBA, PCHBA_TLL_2020_sk &skPCHBA);

        ~PCHBA_TLL_2020();

        enum{
            x
        };

        enum{
            h_pow_x
        };

        enum{
            b
        };

        enum{
            h_, p, c, epk, sigma
        };
};


#endif //PCHBA_TLL_2020_H