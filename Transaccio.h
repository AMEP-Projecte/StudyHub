// Transaccio.h
#ifndef TRANSACCIO_H
#define TRANSACCIO_H

using namespace std;

ref class Transaccio {
public:
    virtual ~Transaccio() {}
    virtual void executar() = 0;
};

#endif
