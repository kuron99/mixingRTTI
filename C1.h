#ifndef TRYLLVM_C1_H
#define TRYLLVM_C1_H
#include <memory>
class C1 {
public:
    virtual ~C1() = default;
private:
    virtual void anchor() ;
};

class C2 : public C1 {
public:
};

#endif //TRYLLVM_C1_H
