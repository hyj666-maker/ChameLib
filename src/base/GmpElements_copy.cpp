#include <base/GmpElements.h>

GmpElements::GmpElements() : size(0), elements(nullptr){}

void GmpElements::init(int n){
    if(size > 0){
        // already initialized
        return;
    }
    size = n;
    elements = new MP_INT*[n];
    for(int i=0; i<n; i++){
        MP_INT *element = new MP_INT();
        mpz_init(element);
        elements[i] = element;
    }
}

GmpElements::GmpElements(const GmpElements &other){
    if (this == &other)
        return;
    
    size = other.size;
    
    elements = new MP_INT*[other.size];
    for(int i = 0; i < other.size; i++){
        MP_INT *element = new MP_INT();
        mpz_init(element);
        mpz_set(element, other.elements[i]);
        elements[i] = element;
    }
}

GmpElements &GmpElements::operator=(const GmpElements &other){
    if (this == &other)
        return *this;

    // Clear existing elements
    for (int i = 0; i < size; i++){
        mpz_clear(elements[i]);
    }
    delete[] elements;

    size = other.size;

    // Copy elements from other
    elements = new MP_INT*[other.size];
    for(int i = 0; i < other.size; i++){
        MP_INT *element = new MP_INT();
        mpz_init(element);
        mpz_set(element, other.elements[i]);
        elements[i] = element;
    }

    return *this;
}

MP_INT* GmpElements::operator[](int index){
    return elements[index];
}

void GmpElements::set(int index, MP_INT *element){
    mpz_set(elements[index], element);
}

int GmpElements::getSize(){
    return size;
}

void GmpElements::print(){
    if (size > 0){
        printf("GmpElements: %d elements\n", size);
        for(int i = 0; i < size; i++){
            if(elements[i] != nullptr){
                printf("Element[%d]: \n", i);
                gmp_printf("%Zd\n", elements[i]);
            }
        }
    }else{
        printf("No elements\n");
    }
}

void GmpElements::print(int index){
    if(elements[index] != nullptr){
        printf("Element[%d]: \n", index);
        gmp_printf("%Zd\n", elements[index]);
    }else{
        printf("Element[%d] does not exist\n", index);
    }
}

GmpElements::~GmpElements(){
    if (elements != nullptr){
        for (int i = 0; i < size; i++){
            mpz_clear(elements[i]);
        }
        delete[] elements;
    }
}

