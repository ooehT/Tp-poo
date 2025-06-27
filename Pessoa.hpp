// Pessoa.h
#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
protected:
    std::string nome;

public:
    Pessoa(std::string n);
    virtual ~Pessoa() = default;

    std::string getNome() const;
};

class Piloto : public Pessoa {
private:
    std::string matricula;
    std::string breve;
    int horasVoo;

public:
    Piloto(std::string nome, std::string matricula, std::string breve, int horasVoo);
    std::string getMatricula() const;
    std::string getBreve() const;
    int getHorasVoo() const;
};

class Passageiro : public Pessoa {
private:
    std::string cpf;
    std::string bilhete;

public:
    Passageiro(std::string nome, std::string cpf, std::string bilhete);
    std::string getCPF() const;
    std::string getBilhete() const;
};

#endif

