#ifndef NO_H
#define NO_H
namespace mathd {
class No {
    int dado;
    No *proximo;
    No *anterior;
private:
    No();
    No(int valor);
    ~No();

public:
    No();
    No(int valor);
    ~No();
    int getDado() const;
    void setDado(int newDado);
    No* getProximo() const;
    void setProximo(No *newProximo);
    No* getAnterior() const;
    void setAnterior(No *newAnterior);
};
}
#endif // NO_H
