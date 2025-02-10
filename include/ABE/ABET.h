/**
 * Policy-based Chameleon Hash for Blockchain Rewriting with Black-box Accountability
 */
#ifndef CHAMELIB_ABET_H
#define CHAMELIB_ABET_H

#include <base/PbcElements_copy.h>
#include <base/PbcScheme.h>
#include <utils/Hash.h>
#include <vector>
#include <string>
#include <unordered_map>
#include <ABE/Policy_resolution.h>
#include <ABE/Policy_generation.h>

class ABET_mpk: public PbcElements_copy{
    private:
        PbcElements_copy gk;  // g^z1, g^z2,...g^zk
        PbcElements_copy gk_pow_a;  // (g^z1)^a, (g^z2)^a,...(g^zk)^a
        PbcElements_copy hk;  // h^z1, h^z2,...h^zk
    public:
        PbcElements_copy& get_gk(){
            return gk;
        }
        PbcElements_copy& get_gk_pow_a(){
            return gk_pow_a;
        }
        PbcElements_copy& get_hk(){
            return hk;
        }
};
class ABET_msk: public PbcElements_copy{
    private:
        PbcElements_copy zk;  // z1,z2,...zk
    public:
        PbcElements_copy& get_zk(){
            return zk;
        }
};
class ABET_ID: public PbcElements_copy{};
class ABET_sks{
    private:
        PbcElements_copy sk0;
        std::vector<PbcElements_copy> sk_y;
        PbcElements_copy sk_prime;
        PbcElements_copy sk1;
        PbcElements_copy sk2;
    public:
        PbcElements_copy& get_sk0(){
            return sk0;
        }
        PbcElements_copy& get_sk_y(int i){
            return sk_y[i];
        }
        std::vector<PbcElements_copy>& get_sk_y(){
            return sk_y;
        }
        PbcElements_copy& get_sk_prime(){
            return sk_prime;
        }
        PbcElements_copy& get_sk1(){
            return sk1;
        }
        PbcElements_copy& get_sk2(){
            return sk2;
        }
};
class ABET_ciphertext{
    private:
        PbcElements_copy ct0;
        std::vector<PbcElements_copy> ct_y;
        PbcElements_copy ct_;  // use ct_ to avoid conflict with ct(ct_1, ct_2, ct_3)
        PbcElements_copy ct_prime;
        PbcElements_copy ct1;
        PbcElements_copy ct2;
        PbcElements_copy ct3;
    public:
        PbcElements_copy& get_ct0(){
            return ct0;
        }
        PbcElements_copy& get_ct_y(int i){
            return ct_y[i];
        }
        std::vector<PbcElements_copy>& get_ct_y(){
            return ct_y;
        }
        PbcElements_copy& get_ct_(){
            return ct_;
        }
        PbcElements_copy& get_ct_prime(){
            return ct_prime;
        }
        PbcElements_copy& get_ct1(){
            return ct1;
        }
        PbcElements_copy& get_ct2(){
            return ct2;
        }
        PbcElements_copy& get_ct3(){
            return ct3;
        }
        void init_same_as(ABET_ciphertext &other){
            ct0.init(other.get_ct0().getSize());
            ct_.init(other.get_ct_().getSize());
            ct_prime.init(other.get_ct_prime().getSize());
            ct1.init(other.get_ct1().getSize());
            ct2.init(other.get_ct2().getSize());
            ct3.init(other.get_ct3().getSize());
        }
};

class ABET:public PbcScheme{
    private:
        int k;
        element_t d1,d2,d3;
        element_t r1,r2;
        element_t R;
        element_t b1r1a1,b1r1a2,b2r2a1,b2r2a2,r1r2a1,r1r2a2;
        element_t s1,s2;

        std::unordered_map<unsigned long int, std::string> pai;  // π(i) -> attr
        std::unordered_map<std::string, unsigned long int> attr_map;  // attr -> index of attr_list
        std::string policy_str;



    public:
        ABET(element_s *_G1, element_s *_G2, element_s *_GT, element_s *_Zn);

        void Setup(ABET_msk &msk, ABET_mpk &mpk, ABET_sks &sks, ABET_ciphertext &ciphertext, int k);

        void KeyGen(ABET_sks &sks, ABET_msk &msk, ABET_mpk &mpk, std::vector<std::string> &attr_list, ABET_ID &ID, int mi);

        void Encrypt(ABET_ciphertext &ciphertext, ABET_mpk &mpk, ABET_msk &msk, element_t r, element_t R, std::string policy_str, ABET_ID &ID, int oj, element_t s1, element_t s2);

        void Decrypt(element_t res_R, element_t res_r, ABET_mpk &mpk, ABET_ciphertext &ciphertext, ABET_sks &sks);

        void Hash(element_t res, std::string m);
        void Hash2(element_t res, element_t m);

        ~ABET() override;

        const int MODIFIER = 1;
        const int OWNER = 2;
        void GetID_(element_t ID_, ABET_mpk &mpk, ABET_ID &ID, int mi_oj, int type);

        enum{
            a1, a2, b1, b2, a, b, g_pow_d1, g_pow_d2, g_pow_d3
        };

        enum{
            g, h, H1, H2, T1, T2, g_pow_a, h_pow_d_div_a, h_pow_1_div_a, h_pow_b_div_a
        };

        enum{
            sk0_1, sk0_2, sk0_3, sk0_4, sk0_5, sk0_6
        };

        enum{
            sk_1, sk_2, sk_3
        };

        enum{
            ct0_1, ct0_2, ct0_3, ct0_4
        };

        enum{
            ct_1, ct_2, ct_3
        };



};


#endif  // CHAMELIB_ABET_H