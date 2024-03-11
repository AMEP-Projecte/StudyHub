// Transaccio.h
#ifndef TRANSACCIO_H
#define TRANSACCIO_H

using namespace std;

class Transaccio {
public:
    virtual ~Transaccio() {}
    virtual void executar() = 0;
};

#endif
